namespace TankLogic
{
    internal class BulletData
    {
        internal Camp Camp { get; set; }
        internal Direction Direction { get; set; }
        internal Position Position { get; set; }
        internal int Speed { get; set; }
        internal uint Level { get; set; }

        internal BulletData(Camp camp, Direction direction, Position position, int speed, uint level)
        {
            Camp = camp;
            Direction = direction;
            Position = position;
            Speed = speed;
            Level = level;
        }
    }
}