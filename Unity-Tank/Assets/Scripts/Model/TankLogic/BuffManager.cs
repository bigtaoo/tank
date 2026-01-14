using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;

namespace TankLogic
{
    internal class BuffManager
    {
        private readonly Main _main;
        private readonly Dictionary<uint, Buff> _buffs = new();

        internal BuffManager(Main main)
        {
            _main = main;
        }

        internal void AddBuff(BuffData buffData)
        {
            if (_buffs.TryGetValue(buffData.BuffId, out _))
            {
                _main.Logger.Warning("Buff already exist.");
            }

            var buff = new Buff(_main, buffData);
            _buffs.Add(buffData.BuffId, buff);
        }

        internal void UpdateBuffs()
        {
            foreach (var key in _buffs.Keys.ToList())
            {
                var buff = _buffs[key];
                if (buff.RemoveTime < _main.GameTime)
                {
                    _buffs.Remove(key);
                }
            }
        }
    }
}