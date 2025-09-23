using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class TankClientPlayerTankComponent : Entity, IAwake, IUpdate
    {
        public GameObject TankPlayer1;
        public Sprite TankLevel1Sprite;
        public Sprite TankLevel2Sprite;
        public Sprite TankLevel3Sprite;
    }
}