using System.Linq;
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
            self.Bullet.SetActive(false);
            self.Z = self.Bullet.transform.position.z;
        }

        [EntitySystem]
        private static void Update(this TankClientBulletComponent self)
        {       
            self.CreateNewBullets();
            self.UpdateBullets();
        }

        private static void CreateNewBullets(this TankClientBulletComponent self)
        {
            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            foreach (var bulletId in bulletComponent.BulletsToAdd)
            {
                var bulletGameObject = UnityEngine.Object.Instantiate(self.Bullet);
                bulletGameObject.SetActive(true);
                self.Bullets.Add(bulletId, bulletGameObject);
            }
            bulletComponent.BulletsToAdd.Clear();
        }

        private static void UpdateBullets(this TankClientBulletComponent self)
        {
            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            foreach (var key in bulletComponent.Bullets.Keys.ToList())
            {
                var bulletGameObject = self.Bullets[key];
                var bullet = bulletComponent.Bullets[key];
                var transform = bulletGameObject.GetComponent<Transform>();
                transform.position = new Vector3(bullet.Position.X, bullet.Position.Y, self.Z);
                //Log.Warning($"client bullet x:{bullet.Position.X}, y:{bullet.Position.Y}");
            }
        }
    }
}