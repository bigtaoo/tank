using System.Collections.Generic;
using System.Linq;

namespace TankLogic
{
    internal class RobotManager
    {
        private readonly Main _main;
        internal Dictionary<uint, RobotTank> Robots { get; private set; } = new();
        internal List<RobotSpawnInfo> RobotSpawnInfos { get; private set; } = new();
        internal int[] RemainingRobotsCount { get; private set; } = new int[3];
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
                RemainingRobotsCount[info.RobotLevel - 1] += info.RobotCount;
            }
        }

        internal void UpdateRobots()
        {
            if (RemainingRobotsCount[0] <= 0 && RemainingRobotsCount[1] <= 0 && RemainingRobotsCount[2] <= 0)
            {
                _main.SetGameOver(GameResultType.Win);
                return;
            }
            
            SpawnRobot();

            foreach (var id in Robots.Keys.ToList())
            {
                var robot = Robots[id];
                if (robot.ToRemove)
                {
                    foreach (var spawnInfo in RobotSpawnInfos)
                    {
                        if (spawnInfo.SpawnPointId == robot.SpawnPointId)
                        {
                            spawnInfo.UpdateSpawnTime(0);
                            break;
                        }
                    }
                    RemainingRobotsCount[robot.SpawnLevel - 1]--;
                    Robots.Remove(id);
                }
                else
                {
                    robot.UpdateRobotPosition();
                    robot.UpdateShooting();
                }
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
                    robot.SpawnPointId = spawnInfo.SpawnPointId;
                    Robots.Add(robot.RobotId, robot);
                    RemainingSpawnRobots[spawnInfo.SpawnPointId]--;

                    AdjustRobotSpawnPosition(robot);

                    var buffData = new BuffData(_main.GetId(), robot.RobotId, BuffType.Invincible, 3000);
                    _main.BuffManager.AddBuff(buffData);

                    var effect = new Effect(_main.GetId(), robot.RobotId, robot.TargetPosition, EffectType.InvincibleShield, 3000);
                    _main.EffectManager.AddClientEffect(effect);

                    // _main.Logger.Warning($"Spawn robot id {robot.RobotId}, level {robotData.Level}");
                }
            }
        }

        private void AdjustRobotSpawnPosition(RobotTank robot)
        {
            if (robot.PositionHasTank(robot.RobotData.CurrentPosition, robot.RobotData.MoveDirection, robot.RobotId))
            {
                return;
            }
            var position = robot.RobotData.CurrentPosition;
            for (int i = -2; i < 2; ++i)
            {
                if (i == 0) continue;
                for (int j = -2; j < 2; ++j)
                {
                    if (j == 0) continue;
                    if (robot.CanTankMoveToPosition(position.X + i, position.Y + j, robot.RobotData.MoveDirection))
                    {
                        position.X += i;
                        position.Y += j;
                        return;
                    }
                }
            }
            _main.Logger.Warning($"Can not find a proper position for robot: {robot.RobotId}");
        }

        private Direction RotationToDirection(int rotation)
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