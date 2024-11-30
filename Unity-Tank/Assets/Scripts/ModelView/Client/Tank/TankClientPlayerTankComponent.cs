using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class TankClientPlayerTankComponent : Entity, IAwake, IUpdate
    {
        public GameObject TankPlayer1;
    }
}