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

        public static void Shoot(this TankPlayerComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            if (currentTime - self.LastShootTime < self.ShootCoolDownTime)
            {
                return;
            }
            self.LastShootTime = currentTime;

            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            bulletComponent.CreateBullet(new TankBullet
            {
                Camp = TankCamp.Player,
                MoveDirection = self.CurrentDirection,
                Position = self.Position,
                Speed = self.MoveSpeed * 3,
            });
        }

        public static void AddBuff(this TankPlayerComponent self, TankBuffType type, long persistTime)
        {
            var buffComponent = self.Root().GetComponent<TankBuffComponent>();

            buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.CanNotMove, persistTime);
        }

        public static void RemoveBuff(this TankPlayerComponent self, TankBuffType type)
        {
            var buffComponent = self.Root().GetComponent<TankBuffComponent>();

            buffComponent.RemoveBuff(TankConsts.PlayerIndex, type);
        }

        private static void UpdatePosition(this TankPlayerComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            var deltaTime = currentTime - self.LastFrameTime;
            self.LastFrameTime = currentTime;

            if (self.MoveDirection == TankDirection.None)
            {
                return;
            }

            var distance = self.MoveSpeed * deltaTime / 1000;
            var (position, rotation) = TankMovementHelper.Move(self.Position, self.MoveDirection, distance);
            self.Rotation = rotation;

            if (TankMovementHelper.CanTankMoveToPosition(self.Root(), position, self.CurrentDirection))
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
                position.Y = TankMovementHelper.PositionToTile(self.CurrentDirection, self.Position.Y);
                //Log.Warning($"Ajust Y: current Y: {self.Position.Y}, target Y: {position.Y}");
                if (position.Y != self.Position.Y)
                {
                    self.Position = position;
                    self.ShowTween = true;
                }
            }
            else if (self.CurrentDirection == TankDirection.Left || self.CurrentDirection == TankDirection.Right)
            {
                var position = self.Position;
                position.X = TankMovementHelper.PositionToTile(self.CurrentDirection, self.Position.X);
                if ( position.X != self.Position.X)
                {
                    self.Position = position;
                    self.ShowTween = true;
                }
            }
        }
    }
}