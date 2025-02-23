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
            self.CheckHelth();
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

        private static void CheckHelth(this TankPlayerComponent self)
        {
            if (self.PlayerLifes <= 0)
            {
                return;
            }
            if (self.HealthPoint <= 0)
            {
                self.HealthPoint = 1;
                --self.PlayerLifes;
                self.Position = self.SpawnPosition;
                self.Rotation = 0;

                var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Spwan, 3000);
            }
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

            var buffComponent = self.Root().GetComponent<TankBuffComponent>();
            if (self.CurrentDirection == TankDirection.Up || self.CurrentDirection == TankDirection.Down)
            {
                var position = self.Position;
                position.Y = TankMovementHelper.PositionToTile(self.CurrentDirection, self.Position.Y);
                //Log.Warning($"Ajust Y: current Y: {self.Position.Y}, target Y: {position.Y}");
                if (position.Y != self.Position.Y)
                {
                    var time = Math.Abs(position.Y - self.Position.Y) * 1000 / self.MoveSpeed / 2;
                    //Log.Warning($"Player tank tween time: {time}, t: {position.Y}, c:{self.Position.Y}, s: {self.MoveSpeed}");
                    buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.AddTween, (int)time);

                    self.Position = position;
                }
            }
            else if (self.CurrentDirection == TankDirection.Left || self.CurrentDirection == TankDirection.Right)
            {
                var position = self.Position;
                position.X = TankMovementHelper.PositionToTile(self.CurrentDirection, self.Position.X);
                if ( position.X != self.Position.X)
                {
                    var time = Math.Abs(position.X - self.Position.X) * 1000 / self.MoveSpeed / 2;
                    buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.AddTween, (int)time);

                    self.Position = position;
                }
            }
        }
    }
}