using System;
using System.Collections.Generic;

namespace TankLogic
{
    internal class RobotTank : Tank<RobotData>
    {
        private readonly Main _main;
        internal uint RobotId { get; private set; }
        internal RobotData RobotData { get; private set; }
        internal Position TargetPosition {get; set; }

        internal RobotTank(RobotData data, Main main, uint robotId) : base(data, main)
        {
            _main = main;
            RobotData = data;
            RobotId = robotId;
            TargetPosition = RobotData.CurrentPosition.Copy();
        }

        internal void UpdateShooting()
        {
            if (RobotData.LastShootTime < _main.GameTime)
            {
                RobotData.LastShootTime = _main.GameTime + RobotData.ShootCoolDownTime + (uint)_main.Random.RandomInt(0, 3000);

                Shoot();
            }
        }

        internal void UpdateRobotPosition()
        {
            // if (buffComponent.GetBuff(robot.RobotId, TankBuffType.CanNotMove) != null)
            // {
            //     continue;
            // }
            var distance = (int)(_tankData.MoveSpeed * Main.FrameTime / 1000);
            var nearTarget = Math.Abs(RobotData.CurrentPosition.X - TargetPosition.X) <= distance &&
                Math.Abs(RobotData.CurrentPosition.Y - TargetPosition.Y) <= distance;
            //Log.Warning($"Near target:{nearTarget}, distance: {distance}, x:{Math.Abs(robot.Position.X - robot.TargetPosition.X)}, y: {Math.Abs(robot.Position.Y - robot.TargetPosition.Y)}");
            if (nearTarget)
            {
                RobotData.CurrentPosition = TargetPosition;
                FindNextTargetPosition();
            }
            else
            {
                RobotData.CurrentPosition = Move(distance);
            }

            // Safe guard
            if (!_main.TileManager.IsInMap(RobotData.CurrentPosition.X, RobotData.CurrentPosition.Y, 1))
            {
                _main.Logger.Warning($"Robot runs out of map. Position: {RobotData.CurrentPosition}");
                RobotData.CurrentPosition = RobotData.SpawnPosition;
                FindNextTargetPosition();
            }           
        }

        private void FindNextTargetPosition()
        {
            //Log.Warning($"Robot position x: {robot.Position.X}, y: {robot.Position.Y}, direction: {robot.Direction.ToString()}");
            var possiblePositions = new List<(Position, Direction)>();
            var robotPosition = RobotData.CurrentPosition;
            Position sameDirection = null;
            if (CanTankMoveToPosition(robotPosition.X - 1, robotPosition.Y, Direction.Left))
            {
                possiblePositions.Add((new Position(robotPosition.X - 1, robotPosition.Y), Direction.Left));
                if (RobotData.MoveDirection == Direction.Left) sameDirection = new Position(robotPosition.X - 1, robotPosition.Y);
            }
            if (CanTankMoveToPosition(robotPosition.X + 1, robotPosition.Y, Direction.Right))
            {
                possiblePositions.Add((new Position(robotPosition.X + 1, robotPosition.Y), Direction.Right));
                if (RobotData.MoveDirection == Direction.Right) sameDirection = new Position(robotPosition.X + 1, robotPosition.Y);
            }
            if (CanTankMoveToPosition(robotPosition.X, robotPosition.Y + 1, Direction.Up))
            {
                possiblePositions.Add((new Position(robotPosition.X, robotPosition.Y + 1), Direction.Up));
                if (RobotData.MoveDirection == Direction.Up) sameDirection = new Position(robotPosition.X, robotPosition.Y + 1);
            }
            if (CanTankMoveToPosition(robotPosition.X, robotPosition.Y - 1, Direction.Down))
            {
                possiblePositions.Add((new Position(robotPosition.X, robotPosition.Y - 1), Direction.Down));
                if (RobotData.MoveDirection == Direction.Down) sameDirection = new Position(robotPosition.X, robotPosition.Y - 1);
            }

            if (possiblePositions.Count == 0)
            {
                return;
            }

            for (int i = possiblePositions.Count - 1; i >= 0; i--)
            {
                var p = possiblePositions[i];
                if (PositionHasTank(p.Item1, p.Item2, RobotId))
                {
                    if (RobotData.MoveDirection == p.Item2)
                    {
                        sameDirection = null;
                    }
                    possiblePositions.RemoveAt(i);
                }
            }

            if (possiblePositions.Count == 0)
            {
                return;
            }

            if (sameDirection != null && _main.Random.RandomInt(0, 100) < 50)
            {
                //Log.Warning("Keep the same direction");
                TargetPosition = sameDirection;
                return;
            }
            var index = _main.Random.RandomInt(0, possiblePositions.Count);
            TargetPosition = possiblePositions[index].Item1;
            RobotData.MoveDirection = possiblePositions[index].Item2;
            //Log.Warning($"Find next positon: {robot.TargetPosition.X}  {robot.TargetPosition.Y}, direction: {robot.Direction.ToString()}");
        }
    }
}