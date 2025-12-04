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

        protected void SetMoveDirection(Direction moveDirection)
        {
            if (moveDirection != Direction.None)
            {
                _tankData.CurrentDirection = moveDirection;
            }

            _tankData.MoveDirection = moveDirection;
        }

        protected void Shoot()
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

        private void UpdatePosition()
        {
            if (_tankData.MoveDirection == Direction.None)
            {
                return;
            }

            var distance = _tankData.MoveSpeed * Main.FrameTime / 1000;
            var (position, rotation) = TankMovementHelper.Move(self.Position, self.MoveDirection, distance);
            self.Rotation = rotation;

            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            foreach (var robot in robotComponent.Robots)
            {
                if (PositionHasTank(position, self.MoveDirection, TankConsts.PlayerIndex))
                {
                    return;
                }
            }

            if (CanTankMoveToPosition(position, self.CurrentDirection))
            {
                self.Position = position;
            }
        }

        public (Position, int) Move(Position currentPosition, Direction direction, float distance)
        {
            var rotation = 0;
            switch (direction)
            {
                case Direction.Left:
                    {
                        currentPosition.X -= distance;
                        rotation = 90;
                        break;
                    }
                case Direction.Right:
                    {
                        currentPosition.X += distance;
                        rotation = 270;
                        break;
                    }
                case Direction.Up:
                    {
                        currentPosition.Y += distance;
                        rotation = 0;
                        break;
                    }
                case Direction.Down:
                    {
                        currentPosition.Y -= distance;
                        rotation = 180;
                        break;
                    }
                case Direction.None:
                default:
                    {
                        break;
                    }
            }
            return (currentPosition, rotation);
        }

        public bool CanTankMoveToPosition(Position targetPosition, Direction direction)
        {
            var mapTilesComponent = null;
            if (!mapTilesComponent.IsInMap(targetPosition, 1.0f))
            {
                return false;
            }
            targetPosition.X = PositionToTile(direction, targetPosition.X);
            targetPosition.Y = PositionToTile(direction, targetPosition.Y);

            switch (direction)
            {
                case Direction.Left:
                    //Log.Warning($"Move left: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new Position { X = targetPosition.X - 1, Y = targetPosition.Y }) == null &&
                        mapTilesComponent.GetTile(new Position { X = targetPosition.X - 1, Y = targetPosition.Y - 1 }) == null;
                case Direction.Right:
                    //Log.Warning($"Move Right: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new Position { X = targetPosition.X, Y = targetPosition.Y }) == null &&
                    mapTilesComponent.GetTile(new Position { X = targetPosition.X, Y = targetPosition.Y - 1 }) == null;
                case Direction.Up:
                    //Log.Warning($"Move Up: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}");
                    return mapTilesComponent.GetTile(new Position { X = targetPosition.X, Y = targetPosition.Y }) == null &&
                        mapTilesComponent.GetTile(new Position { X = targetPosition.X - 1, Y = targetPosition.Y }) == null;
                case Direction.Down:
                    //Log.Warning($"Move Down: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new Position { X = targetPosition.X, Y = targetPosition.Y - 1 }) == null &&
                        mapTilesComponent.GetTile(new Position { X = targetPosition.X - 1, Y = targetPosition.Y - 1 }) == null;
                case Direction.None:
                default:
                    return false;
            }
        }

        public static int PositionToTile(Direction direction, float v)
        {
            return (direction == Direction.Up || direction == Direction.Right) ? (int)Math.Ceiling(v) : (int)Math.Floor(v);
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