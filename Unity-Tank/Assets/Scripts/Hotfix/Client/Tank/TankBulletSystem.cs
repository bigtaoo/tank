using ET.Client;
using System;
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

            foreach (var key in self.Bullets.Keys.ToList())
            {
                var bullet = self.Bullets[key];
                self.UpdateBulletPosition(bullet, deltaTime);
            }

            self.CheckCollisionWithTiles();
            self.CheckCollisionWithOtherBullets();
        }

        public static void CreateBullet(this TankBulletComponent self, TankBullet bullet)
        {
            if (bullet.MoveDirection == TankDirection.None)
            {
                Log.Error("Bullet move direction can not be none!");
            }
            self.IdCounter++;
            self.Bullets.Add(self.IdCounter, bullet);
            self.BulletsToAdd.Add(self.IdCounter);
        }

        public static void HitTank(this TankBulletComponent self, long bulletId)
        {
            var bullet = self.Bullets[bulletId];
            self.CreateExplosionEffect(bullet);
            self.BulletsToRemove.Add(bulletId);
            self.Bullets.Remove(bulletId);
        }

        private static void CheckCollisionWithOtherBullets(this TankBulletComponent self)
        {
            foreach (var key in self.Bullets.Keys.ToList())
            {
                if (self.Bullets.TryGetValue(key, out var bullet))
                {
                    foreach (var checkKey in self.Bullets.Keys.ToList())
                    {
                        if (key == checkKey)
                        {
                            continue;
                        }
                        var checkBullet = self.Bullets[checkKey];
                        if (Math.Abs(bullet.Position.X - checkBullet.Position.X) < 0.5f &&
                            Math.Abs(bullet.Position.Y - checkBullet.Position.Y) < 0.5f)
                        {
                            self.CreateExplosionEffect(bullet);
                            self.BulletsToRemove.Add(key);
                            self.Bullets.Remove(key);
                            self.BulletsToRemove.Add(checkKey);
                            self.Bullets.Remove(checkKey);
                        }
                    }
                }
            }
        }

        private static void CheckCollisionWithTiles(this TankBulletComponent self)
        {
            var mapTilesComponent = self.Root().GetComponent<TankMapTilesComponent>();

            foreach (var key in self.Bullets.Keys.ToList())
            {
                var bullet = self.Bullets[key];
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
                    var hit = false;
                    if (tile != null && tile.Type != TankMapTileType.Water)
                    {
                        hit = true;
                        if (tile.Type == TankMapTileType.Steel && bullet.Level <= 3)
                        {
                            // Stell only can be destroyed by level 3 bullet
                        }
                        else
                        {
                            mapTilesComponent.Tiles.Remove(tile);
                            tile.Type = TankMapTileType.None;
                            mapTilesComponent.TilesToUpdate.Add(tile);
                        }
                    }
                    if (neighborTile != null && neighborTile.Type != TankMapTileType.Water)
                    {
                        hit = true;
                        if (neighborTile.Type == TankMapTileType.Steel && bullet.Level <= 3)
                        {
                            // Stell only can be destroyed by level 3 bullet
                        }
                        else
                        {
                            mapTilesComponent.Tiles.Remove(neighborTile);
                            neighborTile.Type = TankMapTileType.None;
                            mapTilesComponent.TilesToUpdate.Add(neighborTile);
                        }
                    }
                    if (hit)
                    {
                        self.CreateExplosionEffect(bullet);
                        self.BulletsToRemove.Add(key);
                        self.Bullets.Remove(key);
                    }
                }
            }
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

            // Log.Warning($"Update bullet: distance: {distance}, direction: {bullet.MoveDirection}, x:{position.X}, y:{position.Y}");

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
            // Log.Warning($"After update: x:{bullet.Position.X}, y:{bullet.Position.Y}");
        }
    }
}