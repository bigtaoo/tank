using System.Collections.Generic;

namespace TankLogic
{
    internal class RobotManager
    {
        private readonly Main _main;
        internal Dictionary<uint, RobotTank> Robots { get; private set; } = new();
        internal List<RobotSpawnInfo> RobotSpawnInfos { get; private set; } = new();
        int[] RemainingRobotsCount { get; set; } = new int[10];
        private Dictionary<int, int> RemainingSpawnRobots { get; set; } = new();

        internal RobotManager(Main main)
        {
            _main = main;
        }

        internal void SetRobotSpawnInfos(List<RobotSpawnInfo> robotSpawnInfos)
        {
            RobotSpawnInfos = robotSpawnInfos;

            foreach (var info in RobotSpawnInfos)
            {
                RemainingSpawnRobots.Add(info.SpawnPointId, info.RobotCount);
            }
        }

        internal void UpdateRobots()
        {
            SpawnRobot();

            foreach (var robot in Robots.Values)
            {
                robot.UpdatePosition();
            }
        }

        private void SpawnRobot()
        {
            var remaining = 0;
            foreach (var count in RemainingSpawnRobots.Values)
            {
                remaining += count;
            }
            if (remaining <= 0)
            {
                return;
            }

            foreach (var spawnInfo in RobotSpawnInfos)
            {
                if (RemainingSpawnRobots[spawnInfo.SpawnPointId] <= 0)
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
                    RemainingSpawnRobots[spawnInfo.SpawnPointId]--;

                    _main.Logger.Warning($"Spawn robot id {robot.RobotId}");

                    // robot.UpdateSprite = robot.Level != 1;

                    // Log.Warning($"Spawn robot, {robot.ToJson()}, spawn info: {spawnInfo.ToJson()}");
                    // Log.Warning($"Spawn robot level: {robot.Level}");
                    // FindNextTargetPosition(robot);

                    // buffComponent.AddBuff(robot.RobotId, TankBuffType.Invincible, 3000);
                    // attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, robot);
                }
            }
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