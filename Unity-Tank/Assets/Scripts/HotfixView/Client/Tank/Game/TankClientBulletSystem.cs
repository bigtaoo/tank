using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankClientBulletComponent))]
    [FriendOf(typeof(TankClientBulletComponent))]
    public static partial class TankClientBulletSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientBulletComponent self)
        {
            self.Bullet = GameObject.Find("bullet");
            if (self.Bullet == null)
            {
                Log.Error("Not bullet was found in the scene");
            }
        }

        [EntitySystem]
        private static void Update(this TankClientBulletComponent self)
        {

        }
    }
}