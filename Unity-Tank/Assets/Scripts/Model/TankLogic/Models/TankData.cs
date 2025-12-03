namespace TankLogic
{
    internal abstract class TankData
    {
        public Position SpawnPosition { get; set; }
        public Position CurrentPosition { get; set; }
        public Direction MoveDirection { get; set; }
        public Direction CurrentDirection { get; set; }
        public uint MoveSpeed { get; set; }
        public uint BulletSpeed { get; set; }
        public uint Level { get; set; }
        public uint LastShootTime { get; set; }
        public uint ShootCoolDownTime { get; set; }
    }
}