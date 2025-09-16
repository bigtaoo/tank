using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankClientAttachedEffectComponent))]
    [FriendOf(typeof(TankClientAttachedEffectComponent))]
    public static partial class TankClientAttachedEffectSystem
    {
        [EntitySystem]
        public static void Awake(this TankClientAttachedEffectComponent self)
        {
            self.InvincibleBuffSprite = AtlasManager.Instance.GetSprite("effect_shield");
        }

        [EntitySystem]
        public static void Update(this TankClientAttachedEffectComponent self)
        {
            self.RemoveEffect();
            self.AddEffect();
            self.UpdatePosition();
        }

        private static void AddEffect(this TankClientAttachedEffectComponent self)
        {
            var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
            foreach (var attachedEffect in attachedEffectComponent.EffectsToAdd)
            {
                var gameObject = self.GetEffectGameObject();

                self.Effects[attachedEffect.EffectId] = gameObject;
            }

            attachedEffectComponent.EffectsToAdd.Clear();
        }

        private static void RemoveEffect(this TankClientAttachedEffectComponent self)
        {
            var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
            foreach (var attachedEffect in attachedEffectComponent.EffectsToRemove)
            {
                GameObject effect;
                if (self.Effects.TryGetValue(attachedEffect.EffectId, out effect))
                {
                    effect.SetActive(false);
                    self.Effects.Remove(attachedEffect.EffectId);
                    self.CachedEffects.Push(effect);
                }
                else
                {
                    Log.Error($"Can not find client effect by id {attachedEffect.EffectId}");
                }
            }

            attachedEffectComponent.EffectsToRemove.Clear();
        }

        private static void UpdatePosition(this TankClientAttachedEffectComponent self)
        {
            var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
            foreach (var attachedEffect in self.Effects)
            {
                TankAttachedEffect effect;
                var gameObject = attachedEffect.Value;
                if (attachedEffectComponent.TankAttachedEffects.TryGetValue(attachedEffect.Key, out effect))
                {
                    if (effect.IsattachedToPlayer)
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        gameObject.transform.localPosition = new Vector3(playerComponent.Position.X - TankConsts.TileOffset,
                            playerComponent.Position.Y - TankConsts.TileOffset, -2.0f);
                    }
                }
                else
                {
                    Log.Error($"Can not find effect when updating client effect position, effect id: {attachedEffect.Key}");
                }
            }
        }

        private static GameObject GetEffectGameObject(this TankClientAttachedEffectComponent self)
        {
            GameObject gameObject;

            if (self.CachedEffects.Count > 0)
            {
                gameObject = self.CachedEffects.Pop();
            }
            else
            {
                gameObject = new GameObject("effect");
                var spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
                spriteRenderer.sprite = self.InvincibleBuffSprite;
            }

            gameObject.SetActive(true);
            return gameObject;
        }
    }
}