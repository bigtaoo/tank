namespace ET
{
    [EnableClass]
    public class TankItem
    {
        public int ItemId { get; set; }
        public TankItemType ItemType { get; set; }
        public long LivingEndTime { get; set; }
        public TankPosition Position { get; set; }
    }
}