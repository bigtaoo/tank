using System;

namespace TankLogic
{
    internal abstract class Tank<TData> where TData: TankData
    {
        protected TData _tankData;
        private readonly Main _main;

        protected Tank(TData data, Main main)
        {
            _tankData = data;
            _main = main;
        }

        // internal void SetInitiaInfo(Position spawnPostion, int moveSpeed, int bulletSpeed, uint shootCoolDownTime)
        // {
        //     _tankData.SpawnPosition = spawnPostion;
        //     _tankData.MoveSpeed = moveSpeed;
        //     _tankData.BulletSpeed = bulletSpeed;
        //     _tankData.ShootCoolDownTime = shootCoolDownTime;
        // }

        internal void SetMoveDirection(Direction moveDirection)
        {
            if (moveDirection != Direction.None)
            {
                _tankData.CurrentDirection = moveDirection;
            }

            _tankData.MoveDirection = moveDirection;
        }

        internal void Shoot()
        {
            var currentTime = _main.GameTime;
            if (currentTime - _tankData.LastShootTime < _tankData.ShootCoolDownTime)
            {
                return;
            }
            _tankData.LastShootTime = currentTime;

            var bulletData = new BulletData(Camp.Player, _tankData.CurrentDirection, _tankData.CurrentPosition, _tankData.BulletSpeed);
            _main.ProjectileManager.AddBullet(bulletData);
        }

        internal void UpdatePosition()
        {
            if (_tankData.MoveDirection == Direction.None)
            {
                return;
            }

            var distance = (int)(_tankData.MoveSpeed * Main.FrameTime / 1000);
            var position = Move(distance);

            if (CanTankMoveToPosition(position.X, position.Y, _tankData.CurrentDirection))
            {
                _tankData.CurrentPosition = position;
            }
            // Log.Warning($"Move distance: {distance}, X: {position.X}, Y: {position.Y}");
        }

        private Position Move(int distance)
        {
            var position = _tankData.CurrentPosition.Copy();
            switch (_tankData.MoveDirection)
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
                        break;
                    }
            }
            return position;
        }

        public bool CanTankMoveToPosition(int x, int y, Direction direction)
        {
            if (!_main.TileManager.IsInMap(x, y, 1))
            {
                // _main.Logger.Warning("Tank is out of map!!");
                return false;
            }
            var tileX = PositionToTile(direction, x);
            var tileY = PositionToTile(direction, y);

            switch (direction)
            {
                case Direction.Left:
                    _main.Logger.Warning($"Move left: x {tileX} y:{tileY} y {_main.TileManager.GetTile(tileX- 1, tileY) == null}," +
                       $"y+1 {_main.TileManager.GetTile(tileX - 1, tileY + 1) == null}");
                    return _main.TileManager.GetTile(tileX- 1, tileY) == null &&
                        _main.TileManager.GetTile(tileX - 1, tileY + 1) == null;
                case Direction.Right:
                    //Log.Warning($"Move Right: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}");
                    return _main.TileManager.GetTile(tileX, tileY) == null &&
                    _main.TileManager.GetTile(tileX, tileY - 1) == null;
                case Direction.Up:
                    //Log.Warning($"Move Up: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}");
                    return _main.TileManager.GetTile(tileX, tileY) == null &&
                        _main.TileManager.GetTile(tileX - 1, tileY) == null;
                case Direction.Down:
                    //Log.Warning($"Move Down: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return _main.TileManager.GetTile(tileX, tileY - 1) == null &&
                        _main.TileManager.GetTile(tileX - 1, tileY - 1) == null;
                case Direction.None:
                default:
                    return false;
            }
        }

        protected int PositionToTile(Direction direction, float v)
        {
            return (direction == Direction.Up || direction == Direction.Right) ? (int)Math.Ceiling(v / 1000.0f) : (int)Math.Floor(v / 1000.0f);
        }

        private bool PositionHasTank(Position position, Direction direction, uint tankId)
        {
            var X = PositionToTile(direction, position.X);
            var Y = PositionToTile(direction, position.Y);

            foreach (var robot in _main.RobotManager.Robots)
            {
                if (robot.RobotId == tankId)
                {
                    continue;
                }
                var robotX = PositionToTile(robot.RobotData.MoveDirection, robot.RobotData.CurrentPosition.X);
                var robotY = PositionToTile(robot.RobotData.MoveDirection, robot.RobotData.CurrentPosition.Y);

                if (AreRectanglesIntersecting(X, Y, robotX, robotY))
                {
                    return true;
                }
            }

            foreach (var player in _main.PlayerManager.Players)
            {
                if (player.PlayerId == tankId)
                {
                    continue;
                }
                var playerX = PositionToTile(player.PlayerData.MoveDirection, player.PlayerData.CurrentPosition.X);
                var playerY = PositionToTile(player.PlayerData.MoveDirection, player.PlayerData.CurrentPosition.Y);
                if (AreRectanglesIntersecting(X, Y, playerX, playerY))
                {
                    return true;
                }
            }

            return false;
        }

        private bool AreRectanglesIntersecting(float x1, float y1, float x2, float y2)
        {
            if (x1 < x2 - 1 || x2 < x1 - 1) return false;
            if (y1 < y2 - 1 || y2 < y1 - 1) return false;
            return true;
        }
    }
}