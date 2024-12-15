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

        [EntitySystem]
        private static void Update(this TankRobotComponent self)
        {
            self.SpawnRobot();


        }

        private static void UpdatePosition(this TankRobotComponent self)
        {
            foreach (var robot in self.Robots)
            {
            }
        }

        private static void SpawnRobot(this TankRobotComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach (var spawnInfo in self.SpawnInfos)
            {
                if (spawnInfo.SpawnTime == 0 || spawnInfo.SpawnTime + spawnInfo.SpawnInterval < currentTime)
                {
                    var robot = new TankRobot
                    {
                        Direction = self.RotationToDirection(spawnInfo.Rotation),
                        Position = spawnInfo.SpawnPosition,
                        ShootInterval = spawnInfo.ShootInterval,
                        ShootTime = currentTime,
                        SpawnPointId = spawnInfo.SpawnPointId,
                        MoveSpeed = 1.8f,
                    };
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