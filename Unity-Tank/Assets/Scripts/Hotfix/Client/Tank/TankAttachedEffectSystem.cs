using TankLogic;

namespace ET
{
    [EntitySystemOf(typeof(TankAttachedEffectComponent))]
    [FriendOf(typeof(TankAttachedEffectComponent))]
    public static partial class TankAttachedEffectSystem
    {
        [EntitySystem]
        private static void Awake(this TankAttachedEffectComponent self)
        {
            self.EffectIdIndex = 1;
        }

        [EntitySystem]
        public static void Update(this TankAttachedEffectComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            self.TempCache.Clear();
            foreach (var key in self.TankAttachedEffects.Keys)
            {
                var effect = self.TankAttachedEffects[key];
                if (effect.RemoveTime < currentTime)
                {
                    self.EffectsToRemove.Add(effect);
                    self.TempCache.Add(key);
                }
            }
            foreach (var key in self.TempCache)
            {
                self.TankAttachedEffects.Remove(key);
                // Log.Warning($"Remove client effect id: {key}");
            }
        }

        public static void AddClientEffect(this TankAttachedEffectComponent self, SCEffectInfo info)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var effect = new TankAttachedEffect();
            effect.AttachedEffectType = info.EffectType switch
            {
                EffectType.InvincibleShield => TankAttachedEffectType.InvincibleShield,
                _ => TankAttachedEffectType.None,
            };
            effect.AttachedTime = currentTime;
            effect.RemoveTime = currentTime + info.Time;
            effect.IsattachedToPlayer = false;
            effect.EffectId = info.Id;
            effect.Position = new TankPosition { X = info.PosX, Y = info.PosY };
            effect.TankId = info.OwnerId;
            self.EffectsToAdd.Add(effect);
            self.TankAttachedEffects[effect.EffectId] = effect;
        }
    }
}