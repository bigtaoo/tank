namespace ET
{
    [EnableClass]
    public class TankBuff
    {
        public TankBuffType Type { get; set; } = TankBuffType.None;
        public long RemoveTime { get; set; }
    }
}