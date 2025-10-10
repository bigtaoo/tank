using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUITankConfigComponent))]
    [FriendOf(typeof(TankUITankConfigComponent))]
    public static partial class TankUITankConfigSystem
    {
        [EntitySystem]
        private static void Awake(this TankUITankConfigComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.Back = rc.Get<GameObject>("Back");
            self.Back.GetComponent<Button>().onClick.AddListener(() => { self.BackToGameModeUI().Coroutine(); });

            self.MoveSpeedValue = rc.Get<GameObject>("MoveSpeedValue");
            self.MoveSpeedBuy = rc.Get<GameObject>("MoveSpeedBuy");
            self.MoveSpeedLevel = rc.Get<GameObject>("MoveSpeedLevel");
            self.BulletSpeedValue = rc.Get<GameObject>("BulletSpeedValue");
            self.BulletSpeedBuy = rc.Get<GameObject>("BulletSpeedBuy");
            self.BulletSpeedLevel = rc.Get<GameObject>("BulletSpeedLevel");
            self.ShootSpeedValue = rc.Get<GameObject>("ShootSpeedValue");
            self.ShootSpeedBuy = rc.Get<GameObject>("ShootSpeedBuy");
            self.ShootSpeedLevel = rc.Get<GameObject>("ShootSpeedLevel");

            self.GoldInfo = rc.Get<GameObject>("GoldNumber");

            self.DisplayInitialInfo();
        }

        private static async ETTask BackToGameModeUI(this TankUITankConfigComponent self)
        {
            SoundManager.Instance.PlayButtonClick();

            var scene = self.Root();
            await UIHelper.Create(scene, UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(scene, UIType.TankUITankConfig);
        }

        private static void DisplayInitialInfo(this TankUITankConfigComponent self)
        {
            var gameInfoComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var moveSpeed = TankConsts.TankInitialMoveSpeed + gameInfoComponent.UserInfo.TankMoveSpeedLevel * TankConsts.TankMoveSpeedAddedPerLevel;
            var shootCoolDownTime = TankConsts.TankInitialShootCoolDownMS - gameInfoComponent.UserInfo.TankShootSpeedLevel * TankConsts.TankShootCoolDownReducePerLevel;
            var bulletSpeed = TankConsts.BulletInitialMoveSpeed + gameInfoComponent.UserInfo.BulletMoveSpeedLevel * TankConsts.BulletMoveSpeedAddedPerLevel;

            self.MoveSpeedValue.GetComponent<TMP_Text>().text = (moveSpeed / 1000.0f).ToString("F2");
            self.BulletSpeedValue.GetComponent<TMP_Text>().text = (bulletSpeed / 1000.0f).ToString("F2");
            self.ShootSpeedValue.GetComponent<TMP_Text>().text = (1000.0f / shootCoolDownTime).ToString("F2");

            self.MoveSpeedLevel.GetComponent<TMP_Text>().text = gameInfoComponent.UserInfo.TankMoveSpeedLevel.ToString();
            self.BulletSpeedLevel.GetComponent<TMP_Text>().text = gameInfoComponent.UserInfo.BulletMoveSpeedLevel.ToString();
            self.ShootSpeedLevel.GetComponent<TMP_Text>().text = gameInfoComponent.UserInfo.TankShootSpeedLevel.ToString();

            self.GoldInfo.GetComponent<TMP_Text>().text = gameInfoComponent.UserInfo.Gold.ToString();
        }
    }
}
