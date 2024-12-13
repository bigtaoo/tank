using System.Linq;
using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankClientEffectComponent))]
    [FriendOf(typeof(TankClientEffectComponent))]
    public static partial class TankClientEffectSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientEffectComponent self)
        {
            self.Explosion = GameObject.Find("explosion");
            if (self.Explosion == null)
            {
                Log.Error("No explosion effect was found in the scene");
            }
            self.Explosion.SetActive(false);
            self.ExplosionZ = self.Explosion.transform.position.z;
            self.RecycledExplosion.Push(self.Explosion);
        }

        [EntitySystem]
        private static void Update(this TankClientEffectComponent self)
        {
            self.RecycleExplosionEffects();
            self.CreateExplosionEffects();
        }

        private static void CreateExplosionEffects(this TankClientEffectComponent self)
        {
            var effectComponent = self.Root().GetComponent<TankEffectComponent>();
            foreach (var effect in effectComponent.ExplosionEffects)
            {
                var explosion = self.RecycledExplosion.Count > 0 ? self.RecycledExplosion.Pop() : UnityEngine.Object.Instantiate(self.Explosion);
                explosion.SetActive(true);
                explosion.transform.position = new Vector3(effect.Position.X - TankConsts.TileOffset, effect.Position.Y - TankConsts.TileOffset, self.ExplosionZ);
                explosion.transform.rotation = Quaternion.Euler(new Vector3(0, 0, effect.Rotation));
                explosion.GetComponent<Animator>().Play("explosion", -1, 0f);

                self.ExistExplosion[effect.RemoveTime] = explosion;
            }
            effectComponent.ExplosionEffects.Clear();
        }

        private static void RecycleExplosionEffects(this TankClientEffectComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach (var key in self.ExistExplosion.Keys.ToList())
            {
                if (currentTime > key)
                {
                    var explosion = self.ExistExplosion[key];
                    self.ExistExplosion.Remove(key);
                    self.RecycledExplosion.Push(explosion);
                    explosion.SetActive(false);
                }
            }
        }
    }
}