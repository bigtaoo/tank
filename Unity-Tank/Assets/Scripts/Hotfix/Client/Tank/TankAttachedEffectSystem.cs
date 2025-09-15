using System.Linq;

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
            foreach (var key in self.TankAttachedEffects.Keys.ToList())
            {
                var effect = self.TankAttachedEffects[key];
                if (effect.RemoveTime < currentTime)
                {
                    self.EffectsToRemove.Add(effect);
                    self.TankAttachedEffects.Remove(key);
                }
            }
        }

        public static void AddAttachedEffect(this TankAttachedEffectComponent self, TankAttachedEffectType type, long livingTime,
        TankRobot robot, bool isPlayer = false)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var effect = new TankAttachedEffect();
            effect.AttachedEffectType = type;
            effect.AttachedTime = currentTime;
            effect.RemoveTime = currentTime + livingTime;
            effect.IsattachedToPlayer = isPlayer;
            effect.EffectId = self.EffectIdIndex++;

            if (isPlayer)
            {
                var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                effect.Position = playerComponent.Position;
                effect.TankId = TankConsts.PlayerIndex;
            }
            else
            {
                effect.Position = robot.Position;
                effect.TankId = robot.RobotId;
            }

            self.EffectsToAdd.Add(effect);
            self.TankAttachedEffects[effect.EffectId] = effect;
        }
    }
}