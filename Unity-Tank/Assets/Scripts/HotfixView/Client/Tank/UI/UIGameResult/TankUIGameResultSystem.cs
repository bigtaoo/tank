using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIGameResultComponent))]
    [FriendOf(typeof(TankUIGameResultComponent))]
    public static partial class TankUIGameResultSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIGameResultComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.Result = rc.Get<GameObject>("Result");
            self.Back = rc.Get<GameObject>("Back");

            self.Back.GetComponent<Button>().onClick.AddListener(() => { self.BackToGameModeUI().Coroutine(); });
        }


        public static async ETTask BackToGameModeUI(this TankUIGameResultComponent self)
        {
            await UIHelper.Create(self.Root(), UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(self.Root(), UIType.TankUIGameResult);
        }
    }
}
