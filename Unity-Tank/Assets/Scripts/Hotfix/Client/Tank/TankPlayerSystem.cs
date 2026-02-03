using TankLogic;

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
            // self.LastFrameTime = TimeInfo.Instance.ClientFrameTime();
            self.MoveDirection = TankDirection.None;
            self.ShootCoolDownTime = 500;
            self.BulletSpeed = 10.0f;
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
            if (moveDirection == self.MoveDirection)
            {
                return;
            }
            self.MoveDirection = moveDirection;

            var logic = self.Root().GetComponent<TankLogicComponent>();
            logic.SendMoveCommand(moveDirection);
        }

        public static void Shoot(this TankPlayerComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            if (currentTime - self.LastShootTime < self.ShootCoolDownTime)
            {
                return;
            }
            self.LastShootTime = currentTime;

            var logic = self.Root().GetComponent<TankLogicComponent>();
            logic.SendShootCommand();
        }

        public static void UpdatePlayerTankInfo(this TankPlayerComponent self, SCTankInfo tankInfo)
        {
            var position = self.Position;
            position.X = tankInfo.PosX / 1000.0f;
            position.Y = tankInfo.PosY / 1000.0f;
            self.Position = position;

            self.Rotation = TankMovementHelper.DirectionToRotation(tankInfo.Direction);
            if (self.TankLevel != tankInfo.Level)
            {
                self.UpdateSprite = true;
                self.TankLevel = tankInfo.Level;
            }

            // Log.Warning($"New position: X {position.X}, Y {position.Y}");
        }

        public static void SetPlayerLifes(this TankPlayerComponent self, int playerLifes)
        {
            self.PlayerLifes = playerLifes;
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

        public static uint GetTankLevel(this TankPlayerComponent self)
        {
            return self.TankLevel;
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