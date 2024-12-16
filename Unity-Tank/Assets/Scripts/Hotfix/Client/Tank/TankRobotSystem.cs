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
                var (position, rotation) = TankMovementHelper.Move(robot.Position, robot.Direction, distance);
                if (TankMovementHelper.CanTankMoveToPosition(self.Root(), position, robot.Direction))
                {
                    robot.Position = position;
                }
            }
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
                    //Log.Warning($"Spawn robot, id: {robot.RobotId}, x: {robot.Position.X}, y: {robot.Position.Y}");
                    self.Robots.Add(robot);
                    self.RobotsToAdd.Add(robot);
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