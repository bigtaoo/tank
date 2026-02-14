using TMPro;
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
            
        }
    }
}