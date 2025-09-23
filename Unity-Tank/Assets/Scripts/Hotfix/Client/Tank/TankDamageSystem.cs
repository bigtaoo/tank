using ET.Client;

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
            var buffComponent = self.Root().GetComponent<TankBuffComponent>();

            foreach (var bulletId in bulletComponent.Bullets.Keys)
            {
                var bullet = bulletComponent.Bullets[bulletId];
                if (bullet.Camp == TankCamp.Enemy)
                {
                    if (TankDamageHelper.BulletHitTank(bullet.Position, playerComponent.GetPlayerPosition()))
                    {
                        //Log.Warning("Player was hit");                        
                        bulletComponent.HitTank(bulletId);

                        var invincibleBuff = buffComponent.GetBuff(TankConsts.PlayerIndex, TankBuffType.Invincible);
                        if (invincibleBuff == null)
                        {
                            playerComponent.UpdatePlayerTankLevel(-1);
                        }
                        return;
                    }
                }
                else
                {
                    foreach (var robot in robotComponent.Robots.Values)
                    {
                        if (TankDamageHelper.BulletHitTank(bullet.Position, robot.Position))
                        {
                            bulletComponent.HitTank(bulletId);

                            var invincibleBuff = buffComponent.GetBuff(robot.RobotId, TankBuffType.Invincible);
                            if (invincibleBuff == null)
                            {
                                robot.Level -= 1;
                                if (robot.Level > 0)
                                {
                                    robot.UpdateSprite = true;
                                }
                            }

                            return;
                        }
                    }
                }
            }
        }
    }
}