using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIStartSiteComponent))]
    [FriendOf(typeof(TankUIStartSiteComponent))]
    public static partial class TankUIStartSiteSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIStartSiteComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            
            self.SingleMode = rc.Get<GameObject>("SingleMode");
            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.OnSingleModeClick().Coroutine(); });

            self.SingleMode = rc.Get<GameObject>("Multiplayer");
            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.OnMultiplayerClick().Coroutine(); });

            self.SingleMode = rc.Get<GameObject>("Challenge");
            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.OnChallengeClick().Coroutine(); });

            self.SingleMode = rc.Get<GameObject>("Settings");
            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.OnSettingsClick().Coroutine(); });

            self.SingleMode = rc.Get<GameObject>("Shop");
            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.OnShopClick().Coroutine(); });

            self.Information = rc.Get<GameObject>("Information");
            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.OnInformationClick().Coroutine(); });
        }

        private static async ETTask OnSingleModeClick(this TankUIStartSiteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();

            await UIHelper.Create(self.Root(), UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIStartSite);
        }

        private static async ETTask OnChallengeClick(this TankUIStartSiteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();
            
            await UIHelper.Create(self.Root(), UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIStartSite);
        }

        private static async ETTask OnMultiplayerClick(this TankUIStartSiteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();
            
            await UIHelper.Create(self.Root(), UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIStartSite);
        }

        private static async ETTask OnSettingsClick(this TankUIStartSiteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();
            
            await UIHelper.Create(self.Root(), UIType.TankUISettings, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIStartSite);
        }

        private static async ETTask OnShopClick(this TankUIStartSiteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();
            
            await UIHelper.Create(self.Root(), UIType.TankUITankConfig, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIStartSite);
        }

        private static async ETTask OnInformationClick(this TankUIStartSiteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();
            
            await UIHelper.Create(self.Root(), UIType.TankUIInformation, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIStartSite);
        }
    }
}
