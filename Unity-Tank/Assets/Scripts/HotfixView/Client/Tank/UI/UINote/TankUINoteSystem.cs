using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUINoteComponent))]
    [FriendOf(typeof(TankUINoteComponent))]
    public static partial class TankUINoteSystem
    {
        [EntitySystem]
        private static void Awake(this TankUINoteComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.Close = rc.Get<GameObject>("Close");
            self.Close.GetComponent<Button>().onClick.AddListener(() => { self.CloseNotePage().Coroutine(); });

            self.Info = rc.Get<GameObject>("Info");
            self.Info.SetActive(false);
        }

        public static void SetInfo(this TankUINoteComponent self, string info)
        {
            self.Info.SetActive(true);
            self.Info.GetComponent<TMP_Text>().text = info;
        }

        private static async ETTask CloseNotePage(this TankUINoteComponent self)
        {
            SoundManager.Instance.PlayButtonClick();

            var scene = self.Root();
            await UIHelper.Remove(scene, UIType.TankUINote);
        }
    }
}
