using MongoDB.Bson;
using System;
using System.Collections.Generic;

namespace ET
{
    [EntitySystemOf(typeof(TankRobotComponent))]
    [FriendOf(typeof(TankRobotComponent))]
    public static partial class TankRobotSystem
    {
        [EntitySystem]
        private static void Awake(this TankRobotComponent self)
        {
            self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
        }

        [EntitySystem]
        private static void Update(this TankRobotComponent self)
        {
            self.SpawnRobot();
            self.UpdatePosition();

        }

        private static void UpdatePosition(this TankRobotComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var deltaTime = currentTime - self.LastFrameTime;
            self.LastFrameTime = currentTime;

            foreach (var robot in self.Robots)
            {
                float distance = robot.MoveSpeed * deltaTime / 1000.0f;
                var nearTarget = Math.Abs(robot.Position.X - robot.TargetPosition.X) <= distance &&
                    Math.Abs(robot.Position.Y - robot.TargetPosition.Y) <= distance;
                //Log.Warning($"Near target:{nearTarget}, distance: {distance}, x:{Math.Abs(robot.Position.X - robot.TargetPosition.X)}, y: {Math.Abs(robot.Position.Y - robot.TargetPosition.Y)}");
                if (nearTarget)
                {
                    robot.Position = robot.TargetPosition;
                    self.FindNextTargetPosition(robot);
                }
                else
                {
                    var (position, rotation) = TankMovementHelper.Move(robot.Position, robot.Direction, distance);
                    robot.Position = position;
                    robot.Rotation = rotation;
                }
            }
        }

        private static void FindNextTargetPosition(this TankRobotComponent self, TankRobot robot)
        {
            //Log.Warning($"Robot position x: {robot.Position.X}, y: {robot.Position.Y}, direction: {robot.Direction.ToString()}");
            var possiblePositions = new List<(TankPosition, TankDirection)>();
            TankPosition? sameDirection = null;
            if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X - 0.5f, Y = robot.Position.Y }, TankDirection.Left))
            {
                possiblePositions.Add((new TankPosition { X = robot.Position.X - 1, Y =  robot.Position.Y }, TankDirection.Left));
                if (robot.Direction == TankDirection.Left) sameDirection = new TankPosition { X = robot.Position.X - 1, Y = robot.Position.Y };
            }
            if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X + 0.5f, Y = robot.Position.Y }, TankDirection.Right))
            {
                possiblePositions.Add((new TankPosition { X = robot.Position.X + 1, Y = robot.Position.Y }, TankDirection.Right));
                if (robot.Direction == TankDirection.Right) sameDirection = new TankPosition { X = robot.Position.X + 1, Y = robot.Position.Y };
            }
            if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X, Y = robot.Position.Y + 0.5f }, TankDirection.Up))
            {
                possiblePositions.Add((new TankPosition { X = robot.Position.X, Y = robot.Position.Y + 1 }, TankDirection.Up));
                if (robot.Direction == TankDirection.Up) sameDirection = new TankPosition { X = robot.Position.X, Y = robot.Position.Y + 1 };
            }
            if (TankMovementHelper.CanTankMoveToPosition(self.Root(), new TankPosition { X = robot.Position.X, Y = robot.Position.Y - 0.5f }, TankDirection.Down))
            {
                possiblePositions.Add((new TankPosition { X = robot.Position.X, Y = robot.Position.Y - 1 }, TankDirection.Down));
                if (robot.Direction == TankDirection.Down) sameDirection = new TankPosition { X = robot.Position.X, Y = robot.Position.Y - 1 };
            }
            if (sameDirection != null && RandomGenerator.RandInt32() % 100 < 50)
            {
                //Log.Warning("Keep the same direction");
                robot.TargetPosition = sameDirection.Value;
                return;
            }
            var index = RandomGenerator.RandInt32() % possiblePositions.Count;
            robot.TargetPosition = possiblePositions[index].Item1;
            robot.Direction = possiblePositions[index].Item2;
            //Log.Warning($"Find next positon: {robot.TargetPosition.X}  {robot.TargetPosition.Y}, direction: {robot.Direction.ToString()}");
        }

        private static void SpawnRobot(this TankRobotComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach (var spawnInfo in self.SpawnInfos)
            {
                if (spawnInfo.SpawnTime == 0 || spawnInfo.SpawnTime + spawnInfo.SpawnInterval < currentTime)
                {
                    ++self.RobotIdCount;
                    spawnInfo.SpawnTime = currentTime;
                    var robot = new TankRobot
                    {
                        RobotId = self.RobotIdCount,
                        Direction = self.RotationToDirection(spawnInfo.Rotation),
                        Position = spawnInfo.SpawnPosition,
                        ShootInterval = spawnInfo.ShootInterval,
                        ShootTime = currentTime,
                        SpawnPointId = spawnInfo.SpawnPointId,
                        MoveSpeed = 1.8f,
                        Rotation = spawnInfo.Rotation,
                    };
                    Log.Warning($"Spawn robot, {robot.ToJson()}, spawn info: {spawnInfo.ToJson()}");
                    self.Robots.Add(robot);
                    self.RobotsToAdd.Add(robot);
                    self.FindNextTargetPosition(robot);
                }
            }
        }

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