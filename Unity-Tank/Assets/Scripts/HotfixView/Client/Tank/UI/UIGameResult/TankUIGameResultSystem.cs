using TMPro;
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
            self.ShowGameResult();
        }

        public static async ETTask BackToGameModeUI(this TankUIGameResultComponent self)
        {
            await TankSceneChangeHelper.SceneChangeTo(self.Root(), TankMapType.UI, "init", self.Root().InstanceId);
            var scene = self.Root();
            await UIHelper.Create(scene, UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(scene, UIType.TankUIGameMain);
            await UIHelper.Remove(scene, UIType.TankUIGameResult);
        }

        private static void ShowGameResult(this TankUIGameResultComponent self)
        {
            var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
            if (gameResultComponent.IsWin)
            {
                self.Result.GetComponent<TMP_Text>().text = "Win";
            }
            else
            {
                self.Result.GetComponent<TMP_Text>().text = "Loss";
            }
        }
    }
}
