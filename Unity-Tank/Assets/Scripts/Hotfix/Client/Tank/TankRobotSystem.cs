using System.Collections.Generic;
using TankLogic;

namespace ET
{
    [EntitySystemOf(typeof(TankRobotComponent))]
    [FriendOf(typeof(TankRobotComponent))]
    public static partial class TankRobotSystem
    {
        [EntitySystem]
        private static void Awake(this TankRobotComponent self)
        {

        }

        public static void UpdateRobotInfo(this TankRobotComponent self, SCTankInfo tankInfo)
        {
            var position = new TankPosition()
            {
                X = tankInfo.PosX / 1000.0f,
                Y = tankInfo.PosY / 1000.0f,
            };
            var direction = tankInfo.Direction switch
            {
                Direction.Right => TankDirection.Right,
                Direction.Left => TankDirection.Left,
                Direction.Up => TankDirection.Up,
                Direction.Down => TankDirection.Down,
                _ => TankDirection.None,
            };
            if (self.Robots.TryGetValue(tankInfo.Id, out var robot))
            {
                robot.Position = position;
                robot.Direction = direction;
                robot.Rotation = TankMovementHelper.DirectionToRotation(tankInfo.Direction);
            }
            else
            {
                robot = new TankRobot
                {
                    RobotId = tankInfo.Id,
                    Direction = direction,
                    Position = position,
                    SpawnPosition = position,
                    ShootInterval = 3000,
                    ShootTime = 0,
                    SpawnPointId = 0,
                    MoveSpeed = 0,
                    BulletMoveSpeed = 0,
                    Rotation = 0,
                    Level = 1,
                    SpawnLevel = 1,
                };

                self.Robots.Add(tankInfo.Id, robot);
                self.RobotsToAdd.Add(robot);
            }
            // Log.Warning($"tank level: {tankInfo.Level}, robot level: {robot.Level}");
            if (robot.Level != tankInfo.Level)
            {
                robot.Level = (int)tankInfo.Level;
                robot.UpdateSprite = true;
                // Log.Warning("Enable update robot sprite");
            }
        }

        public static void RemoveDeadRobots(this TankRobotComponent self, List<SCTankInfo> tankInfos)
        {
            self.TempCache.Clear();
            foreach (var key in self.Robots.Keys)
            {
                var find = false;
                foreach (var tank in tankInfos)
                {
                    if (tank.Id == key)
                    {
                        find = true;
                        break;
                    }
                }
                if (!find)
                {
                    self.RobotsToRemove.Add(self.Robots[key]);
                    self.TempCache.Add(key);
                }
            }
            foreach (var key in self.TempCache)
            {
                self.Robots.Remove(key);
            }
        }

        public static void SetRemainingRobots(this TankRobotComponent self, int v1, int v2, int v3)
        {
            self.RemainingRobotsCount[0] = v1;
            self.RemainingRobotsCount[1] = v2;
            self.RemainingRobotsCount[2] = v3;
        }
    }
}