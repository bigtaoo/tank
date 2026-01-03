namespace TankLogic
{
    internal class Bullet
    {
        private readonly Main _main;
        internal BulletData BulletData {get; private set; }
        internal bool ToRemove { get; private set; }
        internal uint Id { get; private set; }

        internal Bullet(Main main, BulletData bulletData, uint id)
        {
            _main = main;
            BulletData = bulletData;
            Id = id;
        }

        internal void Update()
        {
            UpdateBulletPosition();
            CheckCollisionWithTiles();
        }

        private void UpdateBulletPosition()
        {
            var distance = (int)(BulletData.Speed * Main.FrameTime / 1000);
            var position = BulletData.Position;

            // Log.Warning($"Update bullet: distance: {distance}, direction: {bullet.MoveDirection}, x:{position.X}, y:{position.Y}");

            switch (BulletData.Direction)
            {
                case Direction.Left:
                    {
                        position.X -= distance;
                        break;
                    }
                case Direction.Right:
                    {
                        position.X += distance;
                        break;
                    }
                case Direction.Up:
                    {
                        position.Y += distance;
                        break;
                    }
                case Direction.Down:
                    {
                        position.Y -= distance;
                        break;
                    }
                case Direction.None:
                default:
                    {
                        return;
                    }
            }
            // _bulletData.Position = position;
            // Log.Warning($"After update: x:{bullet.Position.X}, y:{bullet.Position.Y}");
        }

        private void CheckCollisionWithTiles()
        {
            var tile = _main.TileManager.GetTile(BulletData.Position.X / 1000, BulletData.Position.Y / 1000);
            var neighborTile = BulletData.Direction == Direction.Up || BulletData.Direction == Direction.Down ?
                _main.TileManager.GetTile(BulletData.Position.X / 1000 - 1, BulletData.Position.Y / 1000) :
                _main.TileManager.GetTile(BulletData.Position.X / 1000, BulletData.Position.Y / 1000 - 1);

            if (!_main.TileManager.IsInMap(BulletData.Position.X, BulletData.Position.Y, 1))
            {
                ToRemove = true;
            }
            else if (tile != null || neighborTile != null)
            {
                var hit = false;
                if (tile != null && tile.TileType != TileType.Water)
                {
                    hit = true;
                    if (tile.TileType == TileType.Steel && BulletData.Level <= 3)
                    {
                        // Stell only can be destroyed by level 3 bullet
                    }
                    else
                    {
                        // mapTilesComponent.Tiles.Remove(tile);
                        // tile.Type = TankMapTileType.None;
                        // mapTilesComponent.TilesToUpdate.Add(tile);
                        _main.TileManager.UpdateTile(tile.Position.X, tile.Position.Y, TileType.None);
                    }
                }
                if (neighborTile != null && neighborTile.TileType != TileType.Water)
                {
                    hit = true;
                    if (neighborTile.TileType == TileType.Steel && BulletData.Level <= 3)
                    {
                        // Stell only can be destroyed by level 3 bullet
                    }
                    else
                    {
                        // mapTilesComponent.Tiles.Remove(neighborTile);
                        // neighborTile.Type = TankMapTileType.None;
                        // mapTilesComponent.TilesToUpdate.Add(neighborTile);
                        _main.TileManager.UpdateTile(neighborTile.Position.X, neighborTile.Position.Y, TileType.None);
                    }
                }
                if (hit)
                {
                    // self.CreateExplosionEffect(bullet);
                    // self.BulletsToRemove.Add(key);
                    // self.Bullets.Remove(key);
                    ToRemove = true;

                    var effect = new Effect(_main.GetId(), 0, BulletData.Position.Copy(), EffectType.BulletExplosion, 2000)
                    {
                        Direction = BulletData.Direction,
                    };
                    _main.EffectManager.AddClientEffect(effect);
                }
            }
        }
    }
}