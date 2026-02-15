using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIInformationComponent))]
    [FriendOf(typeof(TankUIInformationComponent))]
    public static partial class TankUIInformationSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIInformationComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            
            self.Back = rc.Get<GameObject>("Back");
            self.Back.GetComponent<Button>().onClick.AddListener(() => { self.OnBackClick().Coroutine(); });
        }

        private static async ETTask OnBackClick(this TankUIInformationComponent self)
        {
            SoundManager.Instance.PlayButtonClick();

            var scene = self.Root();
            await UIHelper.Create(scene, UIType.TankUIStartSite, UILayer.Mid);
            await UIHelper.Remove(scene, UIType.TankUIInformation);
        }
    }
}