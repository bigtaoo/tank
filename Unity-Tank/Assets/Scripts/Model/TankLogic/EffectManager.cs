using System.Collections.Generic;

namespace TankLogic
{
    internal class EffectManager
    {
        private readonly Main _main;
        internal readonly List<Effect> ClientEffects = new();

        internal EffectManager(Main main)
        {
            _main = main;
        }

        internal void AddClientEffect(Effect effect)
        {
            ClientEffects.Add(effect);
        }

        internal void UpdateEffects()
        {
            
        }
    }
}