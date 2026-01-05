using System.Collections.Generic;

namespace TankLogic
{
    internal class RobotManager
    {
        private readonly Main _main;
        internal Dictionary<uint, RobotTank> Robots { get; private set; } = new();
        internal List<RobotSpawnInfo> RobotSpawnInfos { get; private set; } = new();
        int[] RemainingRobotsCount { get; set; } = new int[10];
        int[] RemainingSpawnRobots { get; set; } = new int[10];

        internal RobotManager(Main main)
        {
            _main = main;
        }

        internal void SetRobotSpawnInfos(List<RobotSpawnInfo> robotSpawnInfos)
        {
            RobotSpawnInfos = robotSpawnInfos;
        }

        internal void UpdateRobots()
        {
            
        }

        private void SpawnRobot()
        {
            var remaining = 0;
            foreach (var count in RemainingSpawnRobots)
            {
                remaining += count;
            }
            if (remaining <= 0)
            {
                return;
            }

            foreach (var spawnInfo in RobotSpawnInfos)
            {
                if (RemainingSpawnRobots[spawnInfo.RobotLevel - 1] <= 0)
                {
                    continue;
                }
                if (spawnInfo.SpawnTime == 0 || spawnInfo.SpawnTime + spawnInfo.SpawnInterval < _main.GameTime)
                {
                    spawnInfo.UpdateSpawnTime(_main.GameTime);
                    var robotData = new RobotData()
                    {
                        SpawnPosition = spawnInfo.SpawnPosition,
                        CurrentPosition = spawnInfo.SpawnPosition,
                        CurrentDirection = RotationToDirection(spawnInfo.Rotation),
                        MoveDirection = RotationToDirection(spawnInfo.Rotation),
                        MoveSpeed = spawnInfo.MoveSpeed,
                        BulletSpeed = spawnInfo.BulletMoveSpeed,
                        Level = spawnInfo.RobotLevel,
                        ShootCoolDownTime = spawnInfo.ShootInterval,
                        LastShootTime = _main.GameTime + spawnInfo.ShootInterval + (uint)_main.Random.RandomInt(1000, 3000),
                    };
                    var robot = new RobotTank(robotData, _main, _main.GetId());
                    Robots.Add(robot.RobotId, robot);
                    RemainingSpawnRobots[robotData.Level - 1]--;

                    // robot.UpdateSprite = robot.Level != 1;

                    // Log.Warning($"Spawn robot, {robot.ToJson()}, spawn info: {spawnInfo.ToJson()}");
                    // Log.Warning($"Spawn robot level: {robot.Level}");
                    // FindNextTargetPosition(robot);

                    // buffComponent.AddBuff(robot.RobotId, TankBuffType.Invincible, 3000);
                    // attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, robot);
                }
            }
        }

        void FindNextTargetPosition(RobotTank robot)
        {
            //Log.Warning($"Robot position x: {robot.Position.X}, y: {robot.Position.Y}, direction: {robot.Direction.ToString()}");
            var possiblePositions = new List<(Position, Direction)>();
            var robotPosition = robot.RobotData.CurrentPosition;
            Position sameDirection = null;
            if (robot.CanTankMoveToPosition(robotPosition.X - 1, robotPosition.Y, Direction.Left))
            {
                possiblePositions.Add((new Position(robotPosition.X - 1, robotPosition.Y), Direction.Left));
                if (robot.RobotData.MoveDirection == Direction.Left) sameDirection = new Position(robotPosition.X - 1, robotPosition.Y);
            }
            if (robot.CanTankMoveToPosition(robotPosition.X + 1, robotPosition.Y, Direction.Right))
            {
                possiblePositions.Add((new Position(robotPosition.X + 1, robotPosition.Y), Direction.Right));
                if (robot.RobotData.MoveDirection == Direction.Right) sameDirection = new Position(robotPosition.X + 1, robotPosition.Y);
            }
            if (robot.CanTankMoveToPosition(robotPosition.X, robotPosition.Y + 1, Direction.Up))
            {
                possiblePositions.Add((new Position(robotPosition.X, robotPosition.Y + 1), Direction.Up));
                if (robot.RobotData.MoveDirection == Direction.Up) sameDirection = new Position(robotPosition.X, robotPosition.Y + 1);
            }
            if (robot.CanTankMoveToPosition(robotPosition.X, robotPosition.Y - 1, Direction.Down))
            {
                possiblePositions.Add((new Position(robotPosition.X, robotPosition.Y - 1), Direction.Down));
                if (robot.RobotData.MoveDirection == Direction.Down) sameDirection = new Position(robotPosition.X, robotPosition.Y - 1);
            }

            if (possiblePositions.Count == 0)
            {
                return;
            }

            for (int i = possiblePositions.Count - 1; i >= 0; i--)
            {
                var p = possiblePositions[i];
                if (robot.PositionHasTank(p.Item1, p.Item2, robot.RobotId))
                {
                    if (robot.RobotData.MoveDirection == p.Item2)
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
                robot.TargetPosition = sameDirection;
                return;
            }
            var index = _main.Random.RandomInt(0, possiblePositions.Count);
            robot.TargetPosition = possiblePositions[index].Item1;
            robot.RobotData.MoveDirection = possiblePositions[index].Item2;
            //Log.Warning($"Find next positon: {robot.TargetPosition.X}  {robot.TargetPosition.Y}, direction: {robot.Direction.ToString()}");
        }

        Direction RotationToDirection(int rotation)
        {
            if (rotation == 0)
            {
                return Direction.Up;
            }
            else if (rotation == 90)
            {
                return Direction.Left;
            }
            else if (rotation == 180)
            {
                return Direction.Down;
            }
            else
            {
                return Direction.Right;
            }
        }
    }
}