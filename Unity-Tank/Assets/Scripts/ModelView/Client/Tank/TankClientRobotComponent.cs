using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientRobotComponent : Entity, IAwake, IUpdate
    {
        public Dictionary<int, GameObject> Robots = new();
        public Stack<GameObject> RecycledRobots = new();
        public GameObject RobotGameObject;
        public Sprite SpriteLevel1;
        public Sprite SpriteLevel2;
        public Sprite SpriteLevel3;
    }
}