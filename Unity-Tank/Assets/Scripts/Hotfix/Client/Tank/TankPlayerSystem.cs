using System;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankPlayerComponent))]
    [FriendOf(typeof(TankPlayerComponent))]
    public static partial class TankPlayerSystem
    {
        [EntitySystem]
        private static void Awake(this TankPlayerComponent self)
        {
            self.MoveSpeed = 2.3f;
            self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
            self.MoveDirection = TankDirection.None;
        }

        [EntitySystem]
        private static void Update(this TankPlayerComponent self)
        {
            self.UpdatePosition();
            self.AdjustStopPosition();
        }

        public static void InilializePlayer(this TankPlayerComponent self, TankPosition spawnPosition)
        {
            self.SpawnPosition = spawnPosition;
            self.Position = spawnPosition;
            self.Rotation = 0;
            Log.Warning($"Initia tank position: x: {self.Position.X}, y: {self.Position.Y}");
        }

        public static void SetMoveDirection(this TankPlayerComponent self, TankDirection moveDirection)
        {
            self.MoveDirection = moveDirection;
        }

        private static void UpdatePosition(this TankPlayerComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var deltaTime = currentTime - self.LastFrameTime;
            self.LastFrameTime = currentTime;
            var distance = self.MoveSpeed * deltaTime / 1000;
            var position = self.Position;

            switch (self.MoveDirection)
            {
                case TankDirection.Left:
                    {
                        position.X -= distance;
                        self.Rotation = 90;
                        break;
                    }
                case TankDirection.Right:
                    {
                        position.X += distance;
                        self.Rotation = 270;
                        break;
                    }
                case TankDirection.Up:
                    {
                        position.Y += distance;
                        self.Rotation = 0;
                        break;
                    }
                case TankDirection.Down:
                    {
                        position.Y -= distance;
                        self.Rotation = 180;
                        break;
                    }
                case TankDirection.None:
                default:
                    {
                        return;
                    }
            }
          
            if(self.CanUpdatePlayerTankPosition(position))
            {
                self.Position = position;
            }
        }

        private static bool CanUpdatePlayerTankPosition(this TankPlayerComponent self, TankPosition position)
        {
            var mapTilesComponent = self.Root().GetComponent<TankMapTilesComponent>();
            if (!mapTilesComponent.IsInMap(position, 1.0f))
            {
                return false;
            }
            position.X = self.PositionToTile(position.X);
            position.Y = self.PositionToTile(position.Y);

            switch (self.CurrentDirection)
            {
                case TankDirection.Left:
                    //Log.Warning($"Move left: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y }) == null &&
                        mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 }) == null;
                case TankDirection.Right:
                    //Log.Warning($"Move Right: x {position.X} y:{position.Y} up {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"down {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y }) == null &&
                    mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 }) == null;
                case TankDirection.Up:
                    //Log.Warning($"Move Up: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y }) == null &&
                        mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y }) == null;
                case TankDirection.Down:
                    //Log.Warning($"Move Down: x {position.X} y:{position.Y} right {mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 })}," +
                    //    $"left {mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1 })}");
                    return mapTilesComponent.GetTile(new TankPosition { X = position.X, Y = position.Y - 1 }) == null &&
                        mapTilesComponent.GetTile(new TankPosition { X = position.X - 1, Y = position.Y - 1}) == null;
                case TankDirection.None:
                default:
                    return false;
            }
        }

        private static void AdjustStopPosition(this TankPlayerComponent self)
        {
            if (self.MoveDirection != TankDirection.None)
            {
                return;
            }
            if (self.CurrentDirection == TankDirection.Up || self.CurrentDirection == TankDirection.Down)
            {
                var position = self.Position;
                position.Y = self.PositionToTile(self.Position.Y);
                //Log.Warning($"Ajust Y: current Y: {self.Position.Y}, target Y: {position.Y}");
                if (position.Y != self.Position.Y)
                {
                    self.Position = position;
                }
            }
            else if (self.CurrentDirection == TankDirection.Left || self.CurrentDirection == TankDirection.Right)
            {
                var position = self.Position;
                position.X = self.PositionToTile(self.Position.X);
                if ( position.X != self.Position.X)
                {
                    self.Position = position;
                }
            }
        }

        private static float PositionToTile(this TankPlayerComponent self, float v)
        {
            return (self.CurrentDirection == TankDirection.Up || self.CurrentDirection == TankDirection.Right) ? (float)Math.Ceiling(v) : (float)Math.Floor(v);
        }
    }
}