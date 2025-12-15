using System;

namespace ET
{
    [EntitySystemOf(typeof(TankPlayerComponent))]
    [FriendOf(typeof(TankPlayerComponent))]
    public static partial class TankPlayerSystem
    {
        [EntitySystem]
        private static void Awake(this TankPlayerComponent self)
        {
            self.MoveSpeed = 3.0f;
            self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
            self.MoveDirection = TankDirection.None;
            self.ShootCoolDownTime = 500;
            self.BulletSpeed = 10.0f;
        }

        private static void Update(this TankPlayerComponent self)
        {
            self.CheckHelth();
            self.UpdatePosition();
            self.AdjustStopPosition();
        }

        public static void InilializePlayer(this TankPlayerComponent self, TankPosition spawnPosition,
            int TankMoveSpeed, int ShootCoolDownTime, int BulletMoveSpeed)
        {
            self.SpawnPosition = spawnPosition;
            self.Position = spawnPosition;
            self.Rotation = 0;
            self.MoveSpeed = TankMoveSpeed / 1000.0f;
            self.ShootCoolDownTime = ShootCoolDownTime;
            self.BulletSpeed = BulletMoveSpeed / 1000.0f;
            Log.Info($"Initia tank position: x: {self.Position.X}, y: {self.Position.Y}, " +
                $"move speed: {self.MoveSpeed}, shoot cooldown time: {self.ShootCoolDownTime}, bullet move speed: {self.BulletSpeed}");
        }

        public static void SetMoveDirection(this TankPlayerComponent self, TankDirection moveDirection)
        {
            if (moveDirection != TankDirection.None)
            {
                self.CurrentDirection = moveDirection;
            }

            var buffComponent = self.Root().GetComponent<TankBuffComponent>();
            var spawnBuff = buffComponent.GetBuff(TankConsts.PlayerIndex, TankBuffType.Spwan);
            if (spawnBuff != null)
            {
                return;
            }
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
                Speed = self.BulletSpeed,
            });
        }

        private static void CheckHelth(this TankPlayerComponent self)
        {
            if (self.PlayerLifes <= 0)
            {
                return;
            }
            if (self.TankLevel <= 0)
            {
                self.TankLevel = 1;
                --self.PlayerLifes;
                self.Position = self.SpawnPosition;
                self.Rotation = 0;
                self.MoveDirection = TankDirection.None;

                var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Spwan, 1000);
                buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Invincible, 3000);

                var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
                attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, null, true);
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

            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            foreach (var robot in robotComponent.Robots)
            {
                if (TankMovementHelper.PositionHasTank(self.Root(), position, self.MoveDirection, TankConsts.PlayerIndex))
                {
                    return;
                }
            }

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
                if (position.X != self.Position.X)
                {
                    var time = Math.Abs(position.X - self.Position.X) * 1000 / self.MoveSpeed / 2;
                    buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.AddTween, (int)time);

                    self.Position = position;
                }
            }
        }

        public static TankPosition GetPlayerPosition(this TankPlayerComponent self)
        {
            return self.Position;
        }

        public static int GetPlayerRotation(this TankPlayerComponent self)
        {
            return self.Rotation;
        }

        public static int GetPlayerLifes(this TankPlayerComponent self)
        {
            return self.PlayerLifes;
        }

        public static TankDirection GetPlayerMoveDirection(this TankPlayerComponent self)
        {
            return self.MoveDirection;
        }

        public static int GetTankLevel(this TankPlayerComponent self)
        {
            return self.TankLevel;
        }

        public static void UpdatePlayerTankLevel(this TankPlayerComponent self, int level)
        {
            self.TankLevel += level;
            if (self.TankLevel > 3)
            {
                self.TankLevel = 3;
            }
            self.UpdateSprite = true;
        }

        public static void UpdatePlayerLifes(this TankPlayerComponent self, int lifes)
        {
            self.PlayerLifes += lifes;
        }

        public static bool NeedUpdateSprite(this TankPlayerComponent self)
        {
            return self.UpdateSprite;
        }

        public static void ResetUpdateSprite(this TankPlayerComponent self)
        {
            self.UpdateSprite = false;
        }

        public static long GetShootCoolDownTime(this TankPlayerComponent self)
        {
            return self.ShootCoolDownTime;
        }
    }
}