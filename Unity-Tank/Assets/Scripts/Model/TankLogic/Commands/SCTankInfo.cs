namespace TankLogic
{
    public class SCTankInfo
    {
        public uint Id { get; set; }
        public uint PlayerIndex { get; set; }
        public int PosX { get; set; }
        public int PosY { get; set; }
        public Direction Direction { get; set; }
    }
}