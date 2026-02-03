using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankAttachedEffectComponent : Entity, IAwake, IUpdate
    {
        public int EffectIdIndex { get; set; }
        public Dictionary<uint, TankAttachedEffect> TankAttachedEffects { get; set; } = new();
        public ListComponent<TankAttachedEffect> EffectsToAdd { get; set; } = new();
        public ListComponent<TankAttachedEffect> EffectsToRemove { get; set; } = new();
        public ListComponent<uint> TempCache { get; set; } = new();
    }
}