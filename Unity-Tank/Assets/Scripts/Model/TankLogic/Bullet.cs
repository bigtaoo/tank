using System;

namespace TankLogic
{
    internal class Bullet
    {
        private readonly Main _main;
        internal BulletData BulletData {get; private set; }
        internal bool ToRemove { get; private set; }
        internal uint BulletId { get; private set; }

        internal Bullet(Main main, BulletData bulletData, uint id)
        {
            _main = main;
            BulletData = bulletData;
            BulletId = id;
        }

        internal void Update()
        {
            UpdateBulletPosition();
            CheckCollisionWithTiles();
            CheckCollisionWithTanksAndBullets();
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
            if (_main.Headquarter.IsHitBase(BulletData.Position.X, BulletData.Position.Y))
            {
                _main.SetGameOver(GameResultType.Lose);
                return;  
            };
            var tile = _main.TileManager.GetTile(BulletData.Position.X / 1000, BulletData.Position.Y / 1000);
            var neighborTile = BulletData.Direction == Direction.Up || BulletData.Direction == Direction.Down ?
                _main.TileManager.GetTile(BulletData.Position.X / 1000 - 1, BulletData.Position.Y / 1000) :
                _main.TileManager.GetTile(BulletData.Position.X / 1000, BulletData.Position.Y / 1000 - 1);

            if (!_main.TileManager.IsInMap(BulletData.Position.X, BulletData.Position.Y, 0))
            {
                // _main.Logger.Warning("Remove bullet because it runs out of map.");
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
                        _main.TileManager.UpdateTile(neighborTile.Position.X, neighborTile.Position.Y, TileType.None);
                    }
                }
                if (hit)
                {
                    ToRemove = true;
                    CreateExplosionEffect();
                }
            }
        }

        private void CheckCollisionWithTanksAndBullets()
        {
            foreach (var player in _main.PlayerManager.Players)
            {
                if (BulletData.Camp == Camp.Player)
                {
                    continue;
                }
                if (Hit(player.PlayerData.CurrentPosition))
                {
                    ToRemove = true;
                    CreateExplosionEffect();
                    player.OnPlayerHit();
                }
            }
            foreach (var robot in _main.RobotManager.Robots.Values)
            {
                if (BulletData.Camp == Camp.Robot)
                {
                    continue;
                }
                if (Hit(robot.RobotData.CurrentPosition))
                {
                    ToRemove = true;
                    CreateExplosionEffect();
                    robot.OnRobotHit();
                }
            }
            foreach (var bullet in _main.BulletManager.GetBullets())
            {
                if (bullet.ToRemove || bullet.BulletId == BulletId)
                {
                    continue;
                }
                if (Hit(bullet.BulletData.Position))
                {
                    ToRemove = true;
                    bullet.ToRemove = true;
                    CreateExplosionEffect();
                }
            }
        }

        private bool Hit(Position position)
        {
            return Math.Abs(position.X - BulletData.Position.X) < 800 && 
                Math.Abs(position.Y - BulletData.Position.Y) < 800;
        }

        private void CreateExplosionEffect()
        {
            var effect = new Effect(_main.GetId(), 0, BulletData.Position.Copy(), EffectType.BulletExplosion, 2000)
            {
                Direction = BulletData.Direction,
            };
            _main.EffectManager.AddClientEffect(effect);
        }
    }
}