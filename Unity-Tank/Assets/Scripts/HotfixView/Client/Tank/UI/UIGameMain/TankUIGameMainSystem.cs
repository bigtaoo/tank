using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIGameMainComponent))]
    [FriendOf(typeof(TankUIGameMainComponent))]
    public static partial class TankUIGameMainSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIGameMainComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.JoySticker = rc.Get<GameObject>("joystick");
            self.PlayerHp = rc.Get<GameObject>("hp");
            self.playerTank = rc.Get<GameObject>("player");
            for (int i = 1; i < 4; i++)
            {
                self.RobotImages[i - 1] = rc.Get<GameObject>($"tank-{i}");
                self.RobotRemainingCounts[i - 1] = rc.Get<GameObject>($"number-{i}");
            }
        }
    }
}
