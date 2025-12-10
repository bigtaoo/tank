using System.Collections.Generic;

namespace TankLogic
{
    internal class ProjectileManager
    {
        private readonly Main _main;
        private readonly List<Bullet> _bullets = new();

        internal ProjectileManager(Main main)
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