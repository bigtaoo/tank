
using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameMainComponent : Entity, IAwake, ILateUpdate
    {
        public GameObject[] RobotImages;
        public GameObject[] RobotRemainingCounts;
        public GameObject JoySticker;
        public GameObject PlayerHp;
        public GameObject PlayerTank;
        public GameObject Gold;

        public GameObject Left;
        public GameObject Right;
        public GameObject Up;
        public GameObject Down;
        public GameObject Center;
        public GameObject Shoot;
        public GameObject ShootCoolDown;

        public readonly int RobotUICount = 3;
    }
}
