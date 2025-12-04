namespace TankLogic
{
    internal class Effect
    {
        internal EffectType EffectType { get; set; }
        uint EffectId { get; set; }
        uint TankId { get; set; }
        uint Time { get; set; }

        internal Effect(uint effectId, uint tankId, EffectType effectType, uint time)
        {
            EffectId = effectId;
            TankId = tankId;
            EffectType = effectType;
            Time = time;
        }
    }
}