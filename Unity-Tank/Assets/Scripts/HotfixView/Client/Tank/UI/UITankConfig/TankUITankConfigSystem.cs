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

            self.MoveSpeedBuy.GetComponent<Button>().onClick.AddListener(() => { self.ProcessBuyItem(TankConfigType.TankMoveSpeed); });
            self.ShootSpeedBuy.GetComponent<Button>().onClick.AddListener(() => { self.ProcessBuyItem(TankConfigType.TankShootSpeed); });
            self.BulletSpeedBuy.GetComponent<Button>().onClick.AddListener(() => { self.ProcessBuyItem(TankConfigType.BulletMoveSpeed); });

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
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var moveSpeed = TankConsts.TankInitialMoveSpeed + savedFileComponent.UserInfo.TankMoveSpeedLevel * TankConsts.TankMoveSpeedAddedPerLevel;
            var shootCoolDownTime = TankConsts.TankInitialShootCoolDownMS - savedFileComponent.UserInfo.TankShootSpeedLevel * TankConsts.TankShootCoolDownReducePerLevel;
            var bulletSpeed = TankConsts.BulletInitialMoveSpeed + savedFileComponent.UserInfo.BulletMoveSpeedLevel * TankConsts.BulletMoveSpeedAddedPerLevel;

            self.MoveSpeedValue.GetComponent<TMP_Text>().text = (moveSpeed / 1000.0f).ToString("F2");
            self.BulletSpeedValue.GetComponent<TMP_Text>().text = (bulletSpeed / 1000.0f).ToString("F2");
            self.ShootSpeedValue.GetComponent<TMP_Text>().text = (1000.0f / shootCoolDownTime).ToString("F2");

            self.MoveSpeedLevel.GetComponent<TMP_Text>().text = savedFileComponent.UserInfo.TankMoveSpeedLevel.ToString();
            self.BulletSpeedLevel.GetComponent<TMP_Text>().text = savedFileComponent.UserInfo.BulletMoveSpeedLevel.ToString();
            self.ShootSpeedLevel.GetComponent<TMP_Text>().text = savedFileComponent.UserInfo.TankShootSpeedLevel.ToString();

            self.GoldInfo.GetComponent<TMP_Text>().text = savedFileComponent.UserInfo.Gold.ToString();
        }

        private static void ProcessBuyItem(this TankUITankConfigComponent self, TankConfigType type)
        {
            var itemPrice = 50;
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            if (savedFileComponent.UserInfo.Gold < itemPrice)
            {
                Log.Warning($"Don't have enough money to buy any item. Current money is {savedFileComponent.UserInfo.Gold}");
                return;
            }

            switch (type)
            {
                case TankConfigType.TankMoveSpeed:
                    {
                        savedFileComponent.UserInfo.TankMoveSpeedLevel++;
                        break;
                    }
                case TankConfigType.TankShootSpeed:
                    {
                        savedFileComponent.UserInfo.TankShootSpeedLevel++;
                        break;
                    }
                case TankConfigType.BulletMoveSpeed:
                    {
                        savedFileComponent.UserInfo.BulletMoveSpeedLevel++;
                        break;
                    }
                default:
                    {
                        Log.Error($"Invalid item was bought, item type: {type}");
                        return;
                    }
            }
            savedFileComponent.UserInfo.Gold -= itemPrice;

            savedFileComponent.SaveTankConfigResult();
            self.DisplayInitialInfo();
        }
    }
}
