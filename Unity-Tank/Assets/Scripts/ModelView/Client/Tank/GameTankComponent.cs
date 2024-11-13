using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class GameTankComponent : Entity, IAwake, IUpdate
    {
        public GameObject TankPlayer1;
    }
}