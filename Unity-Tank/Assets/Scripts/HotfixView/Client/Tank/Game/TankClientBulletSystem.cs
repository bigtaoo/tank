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
                Log.Error("No bullet was found in the scene");
            }

            self.Bullet.SetActive(false);
            self.RecycledBullets.Push(self.Bullet);
            self.Z = self.Bullet.transform.position.z;
        }

        [EntitySystem]
        private static void Update(this TankClientBulletComponent self)
        {
            self.RecycleRemovedBullets();
            self.CreateNewBullets();
            self.UpdateBullets();
        }

        private static void RecycleRemovedBullets(this TankClientBulletComponent self)
        {
            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            foreach (var bulletId in bulletComponent.BulletsToRemove)
            {
                var bulletGameObject = self.Bullets[bulletId];
                bulletGameObject.SetActive(false);
                self.RecycledBullets.Push(bulletGameObject);
                self.Bullets.Remove(bulletId);
            }
            bulletComponent.BulletsToRemove.Clear();
        }

        private static void CreateNewBullets(this TankClientBulletComponent self)
        {
            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            foreach (var bulletId in bulletComponent.BulletsToAdd)
            {
                var bulletGameObject = self.RecycledBullets.Count > 0 ? self.RecycledBullets.Pop() : UnityEngine.Object.Instantiate(self.Bullet);
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
                transform.position = new Vector3(bullet.Position.X - TankConsts.TileOffset, bullet.Position.Y - TankConsts.TileOffset, self.Z);
                //Log.Warning($"client bullet x:{bullet.Position.X}, y:{bullet.Position.Y}");
            }
        }
    }
}