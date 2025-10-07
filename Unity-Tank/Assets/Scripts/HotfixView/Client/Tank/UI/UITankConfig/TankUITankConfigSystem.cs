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
        }

        private static async ETTask BackToGameModeUI(this TankUITankConfigComponent self)
        {
            SoundManager.Instance.PlayButtonClick();

            var scene = self.Root();
            await UIHelper.Create(scene, UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(scene, UIType.TankUITankConfig);
        }
    }
}
