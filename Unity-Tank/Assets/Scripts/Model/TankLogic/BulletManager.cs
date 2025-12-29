using System.Collections.Generic;

namespace TankLogic
{
    internal class BulletManager
    {
        private readonly Main _main;
        private readonly List<Bullet> _bullets = new();

        internal BulletManager(Main main)
        {
            _main = main;
        }

        internal void AddBullet(BulletData data)
        {
            
        }

        internal void UpdateProjectiles()
        {
            
        }
    }
}