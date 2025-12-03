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

            // var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            // bulletComponent.CreateBullet(new TankBullet
            // {
            //     Camp = TankCamp.Player,
            //     MoveDirection = self.CurrentDirection,
            //     Position = self.Position,
            //     Speed = self.BulletSpeed,
            // });
        }

        public void Move()
        {
            
        }
    }
}