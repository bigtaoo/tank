namespace TankLogic
{
    internal abstract class TankData
    {
        public Position SpawnPosition { get; set; }
        public Position CurrentPosition { get; set; }
        public Direction MoveDirection { get; set; }
        public Direction CurrentDirection { get; set; }
        public int MoveSpeed { get; set; }
        public int BulletSpeed { get; set; }
        public int Level { get; set; }
        public int LastShootTime { get; set; }
    }
}