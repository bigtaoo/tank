using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class TankGameComponent : Entity, IAwake, IUpdate
    {
        public GameObject TankPlayer1;

        public float MoveSpeed;
    }
}