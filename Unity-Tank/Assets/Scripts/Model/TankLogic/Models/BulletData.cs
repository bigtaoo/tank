namespace TankLogic
{
    internal class BulletData
    {
        Camp Camp { get; set; }
        Direction Direction { get; set; }
        Position Position { get; set; }
        uint Speed { get; set; }

        internal BulletData(Camp camp, Direction direction, Position position, uint speed)
        {
            Camp = camp;
            Direction = direction;
            Position = position;
            Speed = speed;
        }
    }
}