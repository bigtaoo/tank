using TMPro;
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

            self.Left = rc.Get<GameObject>("left");
            var leftHoldButton = self.Left.GetComponent<HoldButton>();
            leftHoldButton.onPress = () => { self.MoveTank(TankDirection.Left); };
            leftHoldButton.onRelease = self.StopTank;
            self.Up = rc.Get<GameObject>("up");
            var upHoldButton = self.Up.GetComponent<HoldButton>();
            upHoldButton.onPress = () => { self.MoveTank(TankDirection.Up); };
            upHoldButton.onRelease = self.StopTank;
            self.Right = rc.Get<GameObject>("right");
            var rightHoldButton = self.Right.GetComponent<HoldButton>();
            rightHoldButton.onPress = () => { self.MoveTank(TankDirection.Right); };
            rightHoldButton.onRelease= self.StopTank;
            self.Down = rc.Get<GameObject>("down");
            var downHoldButton = self.Down.GetComponent<HoldButton>();
            downHoldButton.onPress = () => { self.MoveTank(TankDirection.Down); };
            downHoldButton.onRelease = self.StopTank;
            self.Shoot = rc.Get<GameObject>("shoot");
            self.Shoot.GetComponent<Button>().onClick.AddListener(() => { self.TankShoot(); });
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

        private static void MoveTank(this TankUIGameMainComponent self, TankDirection direction)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            playerComponent.SetMoveDirection(direction);
            playerComponent.CurrentDirection = direction;

            var gameInfoComponent = self.Root().GetComponent<TankClientGameInfoComponent>();
            gameInfoComponent.InputMutex = true;
        }

        private static void StopTank(this TankUIGameMainComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            playerComponent.SetMoveDirection(TankDirection.None);

            var gameInfoComponent = self.Root().GetComponent<TankClientGameInfoComponent>();
            gameInfoComponent.InputMutex = false;
        }

        private static void TankShoot(this  TankUIGameMainComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            playerComponent.Shoot();
        }
    }
}
