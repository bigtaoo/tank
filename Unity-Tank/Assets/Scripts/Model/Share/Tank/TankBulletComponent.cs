using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankBulletComponent : Entity, IAwake, IUpdate
    {
        public Dictionary<long, TankBullet> Bullets {  get; set; } = new Dictionary<long, TankBullet>();
        public ListComponent<long> BulletsToAdd { get; set; } = new();
        public ListComponent<long> BulletsToRemove { get; set; } = new();
        public long IdCounter { get; set; }
    }
}