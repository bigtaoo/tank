namespace ET.Client
{
    [EntitySystemOf(typeof(TankPlayerComponent))]
    [FriendOf(typeof(TankPlayerComponent))]
    public static partial class TankPlayerSystem
    {
        [EntitySystem]
        private static void Awake(this TankPlayerComponent self)
        {
            self.MoveSpeed = 1.3f;
            self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
            self.MoveDirection = TankMoveDirection.None;
        }

        [EntitySystem]
        private static void Update(this TankPlayerComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var deltaTime = currentTime - self.LastFrameTime;
            self.LastFrameTime = currentTime;
            var distence = self.MoveSpeed * deltaTime / 1000;
            var position = self.Position;

            switch(self.MoveDirection)
            {               
                case TankMoveDirection.Left:
                {
                    position.X -= distence;
                    self.Rotation = 360;
                    break;
                }
                case TankMoveDirection.Right:
                {
                    position.X += distence;
                    self.Rotation = 180;
                    break;
                }
                case TankMoveDirection.Up:
                {
                    position.Y += distence;
                    self.Rotation = 270;
                    break;
                }
                case TankMoveDirection.Down:
                {
                    position.Y -= distence;
                    self.Rotation = 90;
                    break;
                }
                case TankMoveDirection.None:
                default:
                {
                    return;
                }
            }
            self.Position = position;
        }

        public static void InilializePlayer(this TankPlayerComponent self, TankPosition spawnPosition)
        {
            self.SpawnPosition = spawnPosition;
            self.Position = spawnPosition;
            self.Rotation = 270;
            Log.Warning($"Initia tank position: x: {self.Position.X}, y: {self.Position.Y}");
        }

        public static void SetMoveDirection(this TankPlayerComponent self, TankMoveDirection moveDirection)
        {
            self.MoveDirection = moveDirection;
        }
    }
}