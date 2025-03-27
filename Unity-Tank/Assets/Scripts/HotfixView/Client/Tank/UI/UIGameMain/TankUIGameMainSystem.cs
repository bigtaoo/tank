using TMPro;
using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIGameMainComponent))]
    [FriendOf(typeof(TankUIGameMainComponent))]
    public static partial class TankUIGameMainSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIGameMainComponent self)
        {
            self.RobotImages = new GameObject[self.RobotUICount];
            self.RobotRemainingCounts = new GameObject[self.RobotUICount];

            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.JoySticker = rc.Get<GameObject>("joystick");
            self.PlayerHp = rc.Get<GameObject>("hp");
            self.PlayerTank = rc.Get<GameObject>("player");
            for (int i = 0; i < self.RobotUICount; i++)
            {
                self.RobotImages[i] = rc.Get<GameObject>($"tank-{i + 1}");
                self.RobotRemainingCounts[i] = rc.Get<GameObject>($"number-{i + 1}");
            }
            self.Gold = rc.Get<GameObject>("gold");
        }

        [EntitySystem]
        private static void LateUpdate(this TankUIGameMainComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            if (playerComponent == null)
            {
                return;
            }

            self.PlayerHp.GetComponent<TMP_Text>().text = playerComponent.PlayerLifes.ToString();

            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            for (int i = 0; i < self.RobotUICount; i++)
            {
                var remainingRotot = robotComponent.RemainingRobotsCount[i];
                //Log.Warning($"remaining robot: {remainingRotot}, index: {i}");
                if (remainingRotot > 0)
                {
                    self.RobotRemainingCounts[i].GetComponent<TMP_Text>().text = remainingRotot.ToString();
                }
                else
                {
                    self.RobotRemainingCounts[i].SetActive(false);
                    self.RobotImages[i].SetActive(false);
                }
            }

            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            self.Gold.GetComponent<TMP_Text>().text = gameInfoComponent.Gold.ToString();
        }
    }
}
