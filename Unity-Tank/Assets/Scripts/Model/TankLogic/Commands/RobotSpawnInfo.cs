namespace TankLogic
{
    public class RobotSpawnInfo
    {
        internal int SpawnPointId { get; private set; }
        internal Position SpawnPosition { get; private set; }
        internal int Rotation { get; private set; }
        internal int RobotCount { get; private set; }
        internal uint SpawnInterval { get; private set; }
        internal int RobotLevel { get; private set; }
        internal uint SpawnTime { get; private set; }
        internal uint ShootInterval { get; private set; }
        internal int MoveSpeed { get; private set; }
        internal int BulletMoveSpeed { get; private set; }

        public RobotSpawnInfo(int spawnPointId, int spawnPositionX, int spawnPositionY, int rotation, int robotCount, uint spawnTime,
            int robotLevel, uint shootInterval, int moveSpeed, int bulletSpeed)
        {
            SpawnPointId = spawnPointId;
            SpawnPosition = new Position(spawnPositionX, spawnPositionY);
            Rotation = rotation;
            RobotCount = robotCount;
            SpawnTime = spawnTime;
            BulletMoveSpeed = bulletSpeed;
            ShootInterval = shootInterval;
            MoveSpeed = moveSpeed;
            BulletMoveSpeed = bulletSpeed;
            RobotLevel = robotLevel;
        }
    }
}