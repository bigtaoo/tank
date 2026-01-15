namespace ET
{
    [EnableClass]
    public class TankAttachedEffect
    {
        public uint EffectId { get; set; }
        public uint TankId { get; set; }
        public TankAttachedEffectType AttachedEffectType { get; set; }
        public long AttachedTime { get; set; }
        public long RemoveTime { get; set; }
        public TankPosition Position { get; set; }
        public bool IsattachedToPlayer { get; set; }
    }
}