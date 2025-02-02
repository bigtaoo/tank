using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankBuffComponent : Entity, IAwake, IUpdate
    {
        public Dictionary<int, ListComponent<TankBuff>> TankBuffs {  get; set; } = new Dictionary<int, ListComponent<TankBuff>>();
    }
}