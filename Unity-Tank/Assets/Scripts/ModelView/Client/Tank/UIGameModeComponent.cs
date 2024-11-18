using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class UIGameModeComponent : Entity, IAwake
    {
        public GameObject SingleMode;
    }
}
