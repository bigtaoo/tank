
using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameMainComponent : Entity, IAwake
    {
        public GameObject[] RobotImages;
        public GameObject[] RobotRemainingCounts;
        public GameObject JoySticker;
        public GameObject PlayerHp;
        public GameObject playerTank;

        public readonly int RobotUICount = 3;
    }
}
