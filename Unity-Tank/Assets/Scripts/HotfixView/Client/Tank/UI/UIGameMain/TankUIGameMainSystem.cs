using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIGameMainComponent))]
    [FriendOf(typeof(TankUIGameMainComponent))]
    public static partial class TankUIGameMainSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIGameMainComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
        }
    }
}
