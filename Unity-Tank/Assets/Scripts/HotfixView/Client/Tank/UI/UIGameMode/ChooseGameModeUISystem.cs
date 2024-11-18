using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(UIGameModeComponent))]
    [FriendOf(typeof(UIGameModeComponent))]
    public static partial class ChooseGameModeUISystem
    {
        [EntitySystem]
        private static void Awake(this UIGameModeComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.SingleMode = rc.Get<GameObject>("EnterMap");

            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.StartSingleMode().Coroutine(); });
        }


        public static async ETTask StartSingleMode(this UIGameModeComponent self)
        {
            await TankSceneChangeHelper.SceneChangeTo(self.Root(), "tank", self.Root().InstanceId);
            await UIHelper.Remove(self.Root(), UIType.UILogin);
        }
    }
}
