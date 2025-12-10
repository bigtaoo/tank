namespace TankLogic
{
    internal class BulletData
    {
        Camp Camp { get; set; }
        Direction Direction { get; set; }
        Position Position { get; set; }
        int Speed { get; set; }

        internal BulletData(Camp camp, Direction direction, Position position, int speed)
        {
            Camp = camp;
            Direction = direction;
            Position = position;
            Speed = speed;
        }
    }
}