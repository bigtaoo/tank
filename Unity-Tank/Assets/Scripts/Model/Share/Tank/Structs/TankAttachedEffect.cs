namespace ET
{
    [EnableClass]
    public class TankAttachedEffect
    {
        public int EffectId { get; set; }
        public int TankId { get; set; }
        public TankAttachedEffectType AttachedEffectType { get; set; }
        public long AttachedTime { get; set; }
        public long RemoveTime { get; set; }
        public TankPosition Position { get; set; }
        public bool IsattachedToPlayer { get; set; }
    }
}