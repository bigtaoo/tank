using System.Linq;
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
            // self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
            // self.RobotId = TankConsts.RobotStartIndex;
        }

        // private static void Update(this TankRobotComponent self)
        // {
        //     var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
        //     if (gameResultComponent.IsGameEnd)
        //     {
        //         return;
        //     }
        //     self.SpawnRobot();
        //     self.CheckRobotAlive();
        //     self.UpdatePosition();
        //     self.UpdateShooting();
        // }

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
        }

        public static void CheckRobotAlive(this TankRobotComponent self)
        {
            foreach(var key in self.Robots.Keys.ToList())
            {
                var robot = self.Robots[key];
                if (robot.Level <= 0)
                {
                    self.SpawnItem(robot);

                    self.SpawnInfos[robot.SpawnPointId].SpawnTime = 0;
                    self.RobotsToRemove.Add(robot);
                    self.Robots.Remove(key);
                    self.RemainingRobotsCount[robot.SpawnLevel - 1]--;
                }
            }
        }

        private static void SpawnItem(this TankRobotComponent self, TankRobot robot)
        {
            var itemComponent = self.Root().GetComponent<TankItemComponent>();
            itemComponent.SpawnItem(robot.Position);
        }

        // private static void UpdateShooting(this TankRobotComponent self)
        // {
        //     var currentTime = TimeInfo.Instance.ClientFrameTime();

        //     foreach (var robot in self.Robots.Values)
        //     {
        //         if (robot.ShootTime < currentTime)
        //         {
        //             robot.ShootTime = currentTime + robot.ShootInterval + RandomGenerator.RandInt32() % self.BasicShootInterval;

        //             var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
        //             bulletComponent.CreateBullet(new TankBullet
        //             {
        //                 Camp = TankCamp.Enemy,
        //                 MoveDirection = robot.Direction,
        //                 Position = robot.Position,
        //                 Speed = robot.BulletMoveSpeed,
        //             });
        //         }
        //     }
        // }

        // private static void UpdatePosition(this TankRobotComponent self)
        // {
        //     var currentTime = TimeInfo.Instance.ClientFrameTime();
        //     var deltaTime = currentTime - self.LastFrameTime;
        //     self.LastFrameTime = currentTime;

        //     var buffComponent = self.Root().GetComponent<TankBuffComponent>();
        //     var mapTilesComponent = self.Root().GetComponent<TankMapTilesComponent>();

        //     foreach (var robot in self.Robots.Values)
        //     {
        //         if (buffComponent.GetBuff(robot.RobotId, TankBuffType.CanNotMove) != null)
        //         {
        //             continue;
        //         }
        //         float distance = robot.MoveSpeed * deltaTime / 1000.0f;
        //         var nearTarget = Math.Abs(robot.Position.X - robot.TargetPosition.X) <= distance &&
        //             Math.Abs(robot.Position.Y - robot.TargetPosition.Y) <= distance;
        //         //Log.Warning($"Near target:{nearTarget}, distance: {distance}, x:{Math.Abs(robot.Position.X - robot.TargetPosition.X)}, y: {Math.Abs(robot.Position.Y - robot.TargetPosition.Y)}");
        //         if (nearTarget)
        //         {
        //             robot.Position = robot.TargetPosition;
        //             self.FindNextTargetPosition(robot);
        //         }
        //         else
        //         {
        //             var (position, rotation) = TankMovementHelper.Move(robot.Position, robot.Direction, distance);
        //             robot.Position = position;
        //             robot.Rotation = rotation;
        //         }

        //         // Safe guard
        //         if (!mapTilesComponent.IsInMap(robot.Position, 0.5f))
        //         {
        //             Log.Error($"Robot runs out of map. Position: {robot.Position.ToString()}");
        //             robot.Position = robot.SpawnPosition;
        //             self.FindNextTargetPosition(robot);
        //         }
        //     }
        // }

        // private static void FindNextTargetPosition(this TankRobotComponent self, TankRobot robot)
        // {
        //     //Log.Warning($"Robot position x: {robot.Position.X}, y: {robot.Position.Y}, direction: {robot.Direction.ToString()}");
        //     var possiblePositions = new List<(TankPosition, TankDirection)>();
        //     TankPosition? sameDirection = null;
        //     if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X - 0.5f, Y = robot.Position.Y }, TankDirection.Left))
        //     {
        //         possiblePositions.Add((new TankPosition { X = robot.Position.X - 1, Y =  robot.Position.Y }, TankDirection.Left));
        //         if (robot.Direction == TankDirection.Left) sameDirection = new TankPosition { X = robot.Position.X - 1, Y = robot.Position.Y };
        //     }
        //     if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X + 0.5f, Y = robot.Position.Y }, TankDirection.Right))
        //     {
        //         possiblePositions.Add((new TankPosition { X = robot.Position.X + 1, Y = robot.Position.Y }, TankDirection.Right));
        //         if (robot.Direction == TankDirection.Right) sameDirection = new TankPosition { X = robot.Position.X + 1, Y = robot.Position.Y };
        //     }
        //     if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X, Y = robot.Position.Y + 0.5f }, TankDirection.Up))
        //     {
        //         possiblePositions.Add((new TankPosition { X = robot.Position.X, Y = robot.Position.Y + 1 }, TankDirection.Up));
        //         if (robot.Direction == TankDirection.Up) sameDirection = new TankPosition { X = robot.Position.X, Y = robot.Position.Y + 1 };
        //     }
        //     if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X, Y = robot.Position.Y - 0.5f }, TankDirection.Down))
        //     {
        //         possiblePositions.Add((new TankPosition { X = robot.Position.X, Y = robot.Position.Y - 1 }, TankDirection.Down));
        //         if (robot.Direction == TankDirection.Down) sameDirection = new TankPosition { X = robot.Position.X, Y = robot.Position.Y - 1 };
        //     }

        //     if (possiblePositions.Count == 0)
        //     {
        //         return;
        //     }

        //     for (int i = possiblePositions.Count - 1; i >= 0; i--)
        //     {
        //         var p = possiblePositions[i];
        //         if (TankMovementHelper.PositionHasTank(self.Root(), p.Item1, p.Item2, robot.RobotId))
        //         {
        //             if (robot.Direction == p.Item2)
        //             {
        //                 sameDirection = null;
        //             }
        //             possiblePositions.RemoveAt(i);
        //         }
        //     }

        //     if (possiblePositions.Count == 0)
        //     {
        //         return;
        //     }

        //     if (sameDirection != null && RandomGenerator.RandInt32() % 100 < 50)
        //     {
        //         //Log.Warning("Keep the same direction");
        //         robot.TargetPosition = sameDirection.Value;
        //         return;
        //     }
        //     var index = RandomGenerator.RandInt32() % possiblePositions.Count;
        //     robot.TargetPosition = possiblePositions[index].Item1;
        //     robot.Direction = possiblePositions[index].Item2;
        //     //Log.Warning($"Find next positon: {robot.TargetPosition.X}  {robot.TargetPosition.Y}, direction: {robot.Direction.ToString()}");
        // }

        // private static void SpawnRobot(this TankRobotComponent self)
        // {
        //     var remaining = 0;
        //     foreach (var count in self.RemainingSpawnRobots)
        //     {
        //         remaining += count;
        //     }
        //     if (remaining <= 0)
        //     {
        //         return;
        //     }
        //     var currentTime = TimeInfo.Instance.ClientFrameTime();

        //     var buffComponent = self.Root().GetComponent<TankBuffComponent>();
        //     var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();

        //     foreach (var spawnInfo in self.SpawnInfos)
        //     {
        //         if (self.RemainingSpawnRobots[spawnInfo.RobotLevel - 1] <= 0)
        //         {
        //             continue;
        //         }
        //         if (spawnInfo.SpawnTime == 0 || spawnInfo.SpawnTime + spawnInfo.SpawnInterval < currentTime)
        //         {
        //             ++self.RobotId;
        //             spawnInfo.SpawnTime = currentTime;
        //             var robot = new TankRobot
        //             {
        //                 RobotId = self.RobotId,
        //                 Direction = self.RotationToDirection(spawnInfo.Rotation),
        //                 Position = spawnInfo.SpawnPosition,
        //                 SpawnPosition = spawnInfo.SpawnPosition,
        //                 ShootInterval = spawnInfo.ShootInterval,
        //                 ShootTime = currentTime + spawnInfo.ShootInterval + RandomGenerator.RandInt32() % self.BasicShootInterval,
        //                 SpawnPointId = spawnInfo.SpawnPointId,
        //                 MoveSpeed = spawnInfo.MoveSpeed / 1000.0f,
        //                 BulletMoveSpeed = spawnInfo.BulletMoveSpeed / 1000.0f,
        //                 Rotation = spawnInfo.Rotation,
        //                 Level = spawnInfo.RobotLevel,
        //                 SpawnLevel = spawnInfo.RobotLevel,
        //             };
        //             robot.UpdateSprite = robot.Level != 1;

        //             // Log.Warning($"Spawn robot, {robot.ToJson()}, spawn info: {spawnInfo.ToJson()}");
        //             // Log.Warning($"Spawn robot level: {robot.Level}");
        //             self.Robots[robot.RobotId] = robot;
        //             self.RobotsToAdd.Add(robot);
        //             self.FindNextTargetPosition(robot);
        //             self.RemainingSpawnRobots[robot.SpawnLevel - 1]--;

        //             buffComponent.AddBuff(robot.RobotId, TankBuffType.Invincible, 3000);
        //             attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, robot);
        //         }
        //     }
        // }

        private static TankDirection RotationToDirection(this TankRobotComponent self, int rotation)
        {
            if (rotation == 0)
            {
                return TankDirection.Up;
            }
            else if (rotation == 90)
            {
                return TankDirection.Left;
            }
            else if (rotation == 180)
            {
                return TankDirection.Down;
            }
            else
            {
                return TankDirection.Right;
            }
        }
    }
}