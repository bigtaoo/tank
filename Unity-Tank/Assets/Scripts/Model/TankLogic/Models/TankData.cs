namespace TankLogic
{
    internal abstract class TankData
    {
        internal Position SpawnPosition { get; set; }
        internal Position CurrentPosition { get; set; }
        internal Direction MoveDirection { get; set; }
        internal Direction CurrentDirection { get; set; }
        internal uint MoveSpeed { get; set; }
        internal uint BulletSpeed { get; set; }
        internal uint Level { get; set; }
        internal uint LastShootTime { get; set; }
        internal uint ShootCoolDownTime { get; set; }
        internal int Rotation { get; set; }
    }
}