using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUITankConfigComponent : Entity, IAwake
    {
        public GameObject Back;

        public GameObject GoldInfo;

        public GameObject MoveSpeedValue;
        public GameObject MoveSpeedBuy;
        public GameObject BulletSpeedValue;
        public GameObject BulletSpeedBuy;
        public GameObject ShootSpeedValue;
        public GameObject ShootSpeedBuy;

        public GameObject MoveSpeedLevel;
        public GameObject BulletSpeedLevel;
        public GameObject ShootSpeedLevel;
    }
}