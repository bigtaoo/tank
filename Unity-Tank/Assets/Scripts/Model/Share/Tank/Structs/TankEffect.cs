namespace ET
{
    [EnableClass]
    public class TankEffect
    {
        public TankPosition Position { get; set; }
        public int Rotation { get; set; }
        public long RemoveTime { get; set; }
    }
}