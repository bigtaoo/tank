namespace TankLogic
{
    internal class Bullet
    {
        private readonly Main _main;
        private BulletData _bulletData;
        internal bool ToRemove { get; private set; }

        internal Bullet(Main main, BulletData bulletData)
        {
            _main = main;
            _bulletData = bulletData;
        }

        internal void Update()
        {
            UpdateBulletPosition();
        }

        private void UpdateBulletPosition()
        {
            var distance = (int)(_bulletData.Speed * Main.FrameTime / 1000);
            var position = _bulletData.Position;

            // Log.Warning($"Update bullet: distance: {distance}, direction: {bullet.MoveDirection}, x:{position.X}, y:{position.Y}");

            switch (_bulletData.Direction)
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
            var tile = _main.TileManager.GetTile(_bulletData.Position.X, _bulletData.Position.Y);
            var neighborTile = _bulletData.Direction == Direction.Up || _bulletData.Direction == Direction.Down ?
                _main.TileManager.GetTile(_bulletData.Position.X - 1, _bulletData.Position.Y) :
                _main.TileManager.GetTile(_bulletData.Position.X, _bulletData.Position.Y - 1);

                if (!_main.TileManager.IsInMap(_bulletData.Position.X, _bulletData.Position.Y, 1))
                {
                    ToRemove = true;
                }
                else if (tile != null || neighborTile != null)
                {
                    var hit = false;
                    if (tile != null && tile.TileType != TileType.Water)
                    {
                        hit = true;
                        if (tile.TileType == TileType.Steel && _bulletData.Level <= 3)
                        {
                            // Stell only can be destroyed by level 3 bullet
                        }
                        else
                        {
                            // mapTilesComponent.Tiles.Remove(tile);
                            // tile.Type = TankMapTileType.None;
                            // mapTilesComponent.TilesToUpdate.Add(tile);
                            ToRemove = true;
                        }
                    }
                    if (neighborTile != null && neighborTile.TileType != TileType.Water)
                    {
                        hit = true;
                        if (neighborTile.TileType == TileType.Steel && _bulletData.Level <= 3)
                        {
                            // Stell only can be destroyed by level 3 bullet
                        }
                        else
                        {
                            // mapTilesComponent.Tiles.Remove(neighborTile);
                            // neighborTile.Type = TankMapTileType.None;
                            // mapTilesComponent.TilesToUpdate.Add(neighborTile);
                            ToRemove = true;
                        }
                    }
                    if (hit)
                    {
                        // self.CreateExplosionEffect(bullet);
                        // self.BulletsToRemove.Add(key);
                        // self.Bullets.Remove(key);
                        ToRemove = true;
                    }
                }
            }
    }
}