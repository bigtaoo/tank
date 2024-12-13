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
                var neighborTile = bullet.MoveDirection == TankDirection.Up || bullet.MoveDirection == TankDirection.Down ?
                    mapTilesComponent.GetTile(new TankPosition { X = bullet.Position.X - 1, Y = bullet.Position.Y }) : 
                    mapTilesComponent.GetTile(new TankPosition { X = bullet.Position.X, Y = bullet.Position.Y - 1 });

                if (!mapTilesComponent.IsInMap(bullet.Position, 0.5f))
                {
                    self.BulletsToRemove.Add(key);
                    self.Bullets.Remove(key);
                }
                else if (tile != null || neighborTile != null)
                {
                    self.CreateExplosionEffect(bullet);
                    self.BulletsToRemove.Add(key);
                    self.Bullets.Remove(key);
                    if (tile != null)
                    {
                        mapTilesComponent.Tiles.Remove(tile);
                        tile.Type = TankMapTileType.None;
                        mapTilesComponent.TilesToUpdate.Add(tile);
                    }
                    if (neighborTile != null)
                    {
                        mapTilesComponent.Tiles.Remove(neighborTile);
                        neighborTile.Type = TankMapTileType.None;
                        mapTilesComponent.TilesToUpdate.Add(neighborTile);
                    }
                }
            }
        }

        public static void CreateBullet(this TankBulletComponent self, TankBullet bullet)
        {
            self.IdCounter++;
            self.Bullets.Add(self.IdCounter, bullet);
            self.BulletsToAdd.Add(self.IdCounter);
        }

        private static void CreateExplosionEffect(this TankBulletComponent self, TankBullet bullet)
        {
            var position = bullet.Position;
            var rotation = 0;
            switch (bullet.MoveDirection)
            {
                case TankDirection.Up: position.Y += 1.0f; rotation = 0;  break;
                case TankDirection.Down: position.Y -= 1.0f; rotation = 180; break;
                case TankDirection.Left: position.X -= 1.0f; rotation = 90; break;
                case TankDirection.Right: position.X += 1.0f; rotation = 270; break;
                default: break;
            }

            var effectComponent = self.Root().GetComponent<TankEffectComponent>();
            effectComponent.ExplosionEffects.Add(new TankEffect
            {
                Position = position,
                Rotation = rotation,
                RemoveTime = TimeInfo.Instance.ClientFrameTime() + 2000,
            });
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