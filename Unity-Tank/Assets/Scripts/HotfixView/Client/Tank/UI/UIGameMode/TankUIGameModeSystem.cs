using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIGameModeComponent))]
    [FriendOf(typeof(TankUIGameModeComponent))]
    public static partial class TankUIGameModeSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIGameModeComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.SingleMode = rc.Get<GameObject>("EnterMap");

            self.SingleMode.GetComponent<Button>().onClick.AddListener(() => { self.StartSingleMode().Coroutine(); });
        }


        public static async ETTask StartSingleMode(this TankUIGameModeComponent self)
        {
            await TankSceneChangeHelper.SceneChangeTo(self.Root(), "tank", self.Root().InstanceId);
            await UIHelper.Remove(self.Root(), UIType.TankUIGameMode);
        }
    }
}
