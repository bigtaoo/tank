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
            self.SingelMode = rc.Get<GameObject>("LoginBtn");

            self.SingelMode.GetComponent<Button>().onClick.AddListener(() => { self.OnLogin(); });
        }


        public static void OnLogin(this UIGameModeComponent self)
        {
        }
    }
}
