
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

        public readonly int RobotUICount = 3;
    }
}
