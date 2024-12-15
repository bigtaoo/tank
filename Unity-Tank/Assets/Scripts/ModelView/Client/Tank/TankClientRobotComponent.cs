using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientRobotComponent : Entity, IAwake, IUpdate
    {
        public Dictionary<int, GameObject> Robots = new Dictionary<int, GameObject>();
        public Stack<GameObject> RecycledRobots = new Stack<GameObject>();
    }
}