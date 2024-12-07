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

            var mapTilesComponent = self.Root().GetComponent<TankMapTilesComponent>();
            if (mapTilesComponent.IsInMap(position, 1.0f) && mapTilesComponent.GetTile(position) == null)
            {
                self.Position = position;
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
                position.Y = (float)Math.Round(self.Position.Y);
                //Log.Warning($"Ajust Y: current Y: {self.Position.Y}, target Y: {position.Y}");
                if (position.Y != self.Position.Y)
                {
                    self.Position = position;
                }
            }
            else if (self.CurrentDirection == TankDirection.Left || self.CurrentDirection == TankDirection.Right)
            {
                var position = self.Position;
                position.X = (float)Math.Round(self.Position.X);
                if ( position.X != self.Position.X)
                {
                    self.Position = position;
                }
            }
        }
    }
}