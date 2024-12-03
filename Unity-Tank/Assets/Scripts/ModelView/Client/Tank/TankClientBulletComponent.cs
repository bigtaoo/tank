using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientBulletComponent : Entity, IAwake, IUpdate
    {
        public GameObject Bullet;
        public Dictionary<long, GameObject> Bullets = new();
        public float Z;
        public Stack<GameObject> RecycledBullets = new();
    }
}