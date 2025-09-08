using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameModeComponent : Entity, IAwake
    {
        public GameObject MapIndex;
        public GameModeConfig Config;
        public GameObject EN;
        public GameObject DE;
        public GameObject ZH;
    }
}
