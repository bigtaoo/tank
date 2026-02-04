using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientEffectComponent : Entity, IAwake, IUpdate
    {
        public GameObject Explosion;
        public Stack<GameObject> RecycledExplosion = new();
        public float ExplosionZ;
        public Dictionary<long, GameObject> ExistExplosion = new();
        public ListComponent<long> TempCache = new();
    }
}