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
            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
        }
    }
}
