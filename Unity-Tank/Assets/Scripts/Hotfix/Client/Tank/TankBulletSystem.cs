using System.Linq;

namespace ET
{
    [EntitySystemOf(typeof(TankBulletComponent))]
    [FriendOf(typeof(TankBulletComponent))]
    public static partial class TankBulletSystem
    {
        [EntitySystem]
        private static void Awake(this TankBulletComponent self)
        {
            self.IdCounter++;
        }

        [EntitySystem]
        private static void Update(this TankBulletComponent self)
        {
            foreach (var key in self.Bullets.Keys.ToList())
            {
                var bullet = self.Bullets[key];
            }
        }

        public static void CreateBullet(this TankBulletComponent self, TankBullet bullet)
        {
            self.IdCounter++;
            self.Bullets.Add(self.IdCounter, bullet);
            self.BulletsToAdd.Add(self.IdCounter);
        }
    }
}