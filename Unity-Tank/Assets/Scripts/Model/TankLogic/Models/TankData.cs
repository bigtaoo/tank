namespace TankLogic
{
    internal abstract class TankData
    {
        internal Position SpawnPosition { get; set; }
        internal Position CurrentPosition { get; set; }
        internal Direction MoveDirection { get; set; }
        internal Direction CurrentDirection { get; set; }
        internal int MoveSpeed { get; set; }
        internal int BulletSpeed { get; set; }
        internal uint Level { get; set; }
        internal uint LastShootTime { get; set; }
        internal uint ShootCoolDownTime { get; set; }
    }
}