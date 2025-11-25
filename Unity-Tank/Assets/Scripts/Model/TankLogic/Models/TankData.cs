namespace TankLogic
{
    public abstract class TankData
    {
        public Position SpawnPosition { get; protected set; }
        public Position CurrentPosition { get; protected set; }
        public Direction MoveDirection { get; protected set; }
        public Direction CurrentDirection { get; protected set; }
        public int MoveSpeed { get; protected set; }
        public int BulletSpeed { get; protected set; }
        public int Level { get; protected set; }
        public int LastShootTime { get; protected set; }
    }
}