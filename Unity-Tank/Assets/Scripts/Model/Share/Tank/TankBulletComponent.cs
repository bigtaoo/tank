using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankBulletComponent : Entity, IAwake
    {
        public Dictionary<uint, TankBullet> Bullets {  get; set; } = new();
        public ListComponent<long> BulletsToAdd { get; set; } = new();
        public ListComponent<long> BulletsToRemove { get; set; } = new();
        public ListComponent<uint> TempCache { get; set; } = new();
    }
}