using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameModeComponent : Entity, IAwake
    {
        public GameObject SingleMode;
    }
}
