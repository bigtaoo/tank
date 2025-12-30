using System.Collections.Generic;
using System.Linq;

namespace TankLogic
{
    internal class BulletManager
    {
        private readonly Main _main;
        private readonly Dictionary<uint, Bullet> _bullets = new();

        internal BulletManager(Main main)
        {
            _main = main;
        }

        internal void AddBullet(BulletData data)
        {
            var bullet = new Bullet(_main, data, _main.GetId());
            _bullets[bullet.Id] = bullet;
        }

        internal void UpdateProjectiles()
        {
            var keys = _bullets.Keys.ToList();
            foreach (var key in keys)
            {
                var bullet = _bullets[key];
                if (bullet.ToRemove)
                {
                    _bullets.Remove(key);
                    continue;
                }

                bullet.Update();
            }
        }

        internal List<Bullet> GetBullets()
        {
            return _bullets.Values.ToList();
        }
    }
}