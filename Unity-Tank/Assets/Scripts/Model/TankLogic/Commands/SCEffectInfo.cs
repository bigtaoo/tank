namespace TankLogic
{
    public class SCEffectInfo
    {
        public uint Id { get; set; }
        public int PosX { get; set; }
        public int PosY { get; set; }
        public uint Time { get; set; }
        public uint OwnerId { get; set; }
        public EffectType EffectType { get; set; }
    }
}