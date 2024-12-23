namespace ET
{
    [EntitySystemOf(typeof(TankDamageComponent))]
    [FriendOf(typeof(TankDamageComponent))]
    public static partial class TankDamageSystem
    {
        [EntitySystem]
        private static void Awake(this TankDamageComponent self)
        {

        }

        [EntitySystem]
        private static void Update(this TankDamageComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();

            foreach (var bulletId in bulletComponent.Bullets.Keys)
            {
                var bullet = bulletComponent.Bullets[bulletId];
                if (TankDamageHelper.BulletHitTank(bullet.Position, playerComponent.Position))
                {
                    Log.Warning("Player was hit");
                }
                foreach (var robot in robotComponent.Robots)
                {
                    if (TankDamageHelper.BulletHitTank(bullet.Position, robot.Position))
                    {
                        robot.HealthPoint -= 1;
                    }
                }
            }
        }
    }
}