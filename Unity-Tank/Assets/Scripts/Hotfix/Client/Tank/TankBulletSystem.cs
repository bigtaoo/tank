using ET.Client;
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
            self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
        }

        [EntitySystem]
        private static void Update(this TankBulletComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var deltaTime = currentTime - self.LastFrameTime;
            self.LastFrameTime = currentTime;

            var mapTilesComponent = self.Root().GetComponent<TankMapTilesComponent>();

            foreach (var key in self.Bullets.Keys.ToList())
            {
                var bullet = self.Bullets[key];
                self.UpdateBulletPosition(bullet, deltaTime);
                var tile = mapTilesComponent.GetTile(bullet.Position);

                if (!mapTilesComponent.IsInMap(bullet.Position, 0.5f))
                {
                    self.BulletsToRemove.Add(key);
                    self.Bullets.Remove(key);
                }
                else if (tile != null)
                {
                    self.BulletsToRemove.Add(key);
                    self.Bullets.Remove(key);
                    mapTilesComponent.Tiles.Remove(tile);
                    tile.Type = TankMapTileType.None;
                    mapTilesComponent.TilesToUpdate.Add(tile);
                }
            }
        }

        public static void CreateBullet(this TankBulletComponent self, TankBullet bullet)
        {
            self.IdCounter++;
            self.Bullets.Add(self.IdCounter, bullet);
            self.BulletsToAdd.Add(self.IdCounter);
        }

        private static void UpdateBulletPosition(this TankBulletComponent self, TankBullet bullet, long deltaTime)
        {
            var distance = bullet.Speed * deltaTime / 1000;
            var position = bullet.Position;

            //Log.Warning($"Update bullet: distance: {distance}, direction: {bullet.MoveDirection}, x:{position.X}, y:{position.Y}");

            switch (bullet.MoveDirection)
            {
                case TankDirection.Left:
                    {
                        position.X -= distance;
                        break;
                    }
                case TankDirection.Right:
                    {
                        position.X += distance;
                        break;
                    }
                case TankDirection.Up:
                    {
                        position.Y += distance;
                        break;
                    }
                case TankDirection.Down:
                    {
                        position.Y -= distance;
                        break;
                    }
                case TankDirection.None:
                default:
                    {
                        return;
                    }
            }
            bullet.Position = position;
            //Log.Warning($"After update: x:{bullet.Position.X}, y:{bullet.Position.Y}");
        }
    }
}