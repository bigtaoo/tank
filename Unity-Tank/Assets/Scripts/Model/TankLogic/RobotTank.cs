using System;
using System.Collections.Generic;

namespace TankLogic
{
    internal class RobotTank : Tank<RobotData>
    {
        private readonly Main _main;
        internal uint RobotId { get; private set; }
        internal RobotData RobotData { get; private set; }
        internal Position TargetPosition { get; set; }
        internal bool ToRemove { get; private set; }
        internal bool UpdateSprite { get; private set; }
        internal int SpawnPointId { get; set; }

        internal RobotTank(RobotData data, Main main, uint robotId) : base(data, main)
        {
            _main = main;
            RobotData = data;
            RobotId = robotId;
            TargetPosition = RobotData.CurrentPosition.Copy();
            UpdateSprite = data.Level != 1;
        }

        internal void UpdateShooting()
        {
            if (RobotData.LastShootTime < _main.GameTime)
            {
                RobotData.LastShootTime = _main.GameTime + (uint)_main.Random.RandomInt(2000, 7000);

                var bulletData = new BulletData(Camp.Robot, _tankData.MoveDirection, _tankData.CurrentPosition.Copy(), _tankData.BulletSpeed, 1);
                _main.BulletManager.AddBullet(bulletData);
                // _main.Logger.Warning("Robot shooting!");
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
            // _main.Logger.Warning($"Near target:{nearTarget}, distance: {distance}, x:{Math.Abs(RobotData.CurrentPosition.X - TargetPosition.X)}," +
            // $"y: {Math.Abs(RobotData.CurrentPosition.Y - TargetPosition.Y)}");
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

        internal void OnRobotHit()
        {
            var buff = _main.BuffManager.GetBuff(RobotId, BuffType.Invincible);
            if (buff != null)
            {
                return;
            }

            --RobotData.Level;
            if (RobotData.Level < 1)
            {
                ToRemove = true;
            }
            else
            {
                UpdateSprite = true;
            }
        }

        internal void SpriteUpdated()
        {
            UpdateSprite = false;
        }

        private void FindNextTargetPosition()
        {
            //Log.Warning($"Robot position x: {robot.Position.X}, y: {robot.Position.Y}, direction: {robot.Direction.ToString()}");
            var possiblePositions = new List<(Position, Direction)>();
            var robotPosition = RobotData.CurrentPosition;
            Position sameDirection = null;
            const int dis = 1000;
            if (CanTankMoveToPosition(robotPosition.X - dis, robotPosition.Y, Direction.Left))
            {
                possiblePositions.Add((new Position(robotPosition.X - dis, robotPosition.Y), Direction.Left));
                if (RobotData.MoveDirection == Direction.Left) sameDirection = new Position(robotPosition.X - dis, robotPosition.Y);
            }
            if (CanTankMoveToPosition(robotPosition.X + dis, robotPosition.Y, Direction.Right))
            {
                possiblePositions.Add((new Position(robotPosition.X + dis, robotPosition.Y), Direction.Right));
                if (RobotData.MoveDirection == Direction.Right) sameDirection = new Position(robotPosition.X + dis, robotPosition.Y);
            }
            if (CanTankMoveToPosition(robotPosition.X, robotPosition.Y + dis, Direction.Up))
            {
                possiblePositions.Add((new Position(robotPosition.X, robotPosition.Y + dis), Direction.Up));
                if (RobotData.MoveDirection == Direction.Up) sameDirection = new Position(robotPosition.X, robotPosition.Y + dis);
            }
            if (CanTankMoveToPosition(robotPosition.X, robotPosition.Y - dis, Direction.Down))
            {
                possiblePositions.Add((new Position(robotPosition.X, robotPosition.Y - dis), Direction.Down));
                if (RobotData.MoveDirection == Direction.Down) sameDirection = new Position(robotPosition.X, robotPosition.Y - dis);
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
            // _main.Logger.Warning($"Find next positon: {TargetPosition.X}  {TargetPosition.Y}, direction: {RobotData.MoveDirection.ToString()}");
        }
    }
}