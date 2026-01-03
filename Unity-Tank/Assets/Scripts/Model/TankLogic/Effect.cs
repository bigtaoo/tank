namespace TankLogic
{
    internal class Effect
    {
        internal EffectType EffectType { get; set; }
        internal uint EffectId { get; set; }
        internal uint OwnerId { get; set; }
        internal uint Time { get; set; }
        internal Position Position { get; set; }

        internal Effect(uint effectId, uint ownerId, Position position, EffectType effectType, uint time)
        {
            EffectId = effectId;
            OwnerId = ownerId;
            Position = position;
            EffectType = effectType;
            Time = time;
        }
    }
}