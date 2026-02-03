using System.Collections.Generic;
using TankLogic;

namespace ET
{
    [EntitySystemOf(typeof(TankBulletComponent))]
    [FriendOf(typeof(TankBulletComponent))]
    public static partial class TankBulletSystem
    {
        [EntitySystem]
        private static void Awake(this TankBulletComponent self)
        {

        }

        public static void UpdateSCBulletInfo(this TankBulletComponent self, List<SCBulletInfo> bulletInfos)
        {
            self.TempCache.Clear();
            // To Remove
            foreach (var id in self.Bullets.Keys)
            {
                var find = false;
                foreach (var bullet in bulletInfos)
                {
                    if (id == bullet.Id)
                    {
                        find = true;
                        break;
                    }
                }
                if (!find)
                {
                    // Log.Warning($"Client delete bullet, id: {id}");
                    self.BulletsToRemove.Add(id);
                    self.TempCache.Add(id);                   
                }
            }
            foreach (var key in self.TempCache)
            {
                self.Bullets.Remove(key);
            }

            // To Update
            foreach (var info in bulletInfos)
            {
                if (self.Bullets.TryGetValue(info.Id, out var bullet))
                {
                    var p = bullet.Position;
                    p.X = info.PosX / 1000.0f;
                    p.Y = info.PosY / 1000.0f;
                    bullet.Position = p;
                }
                else
                {
                    bullet = new TankBullet
                    {
                        Position = new TankPosition
                        {
                            X = info.PosX / 1000.0f,
                            Y = info.PosY / 1000.0f,
                        },
                    };
                    // Log.Warning($"Client add new bullet, id: {info.Id}, x: {bullet.Position.X}, y: {bullet.Position.Y}");
                    self.Bullets.Add(info.Id, bullet);
                    self.BulletsToAdd.Add(info.Id);
                }
            }
        }
    }
}