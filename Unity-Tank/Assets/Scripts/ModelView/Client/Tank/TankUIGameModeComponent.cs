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
        public GameObject TankConfig;
        public GameObject Settings;
        public int SelectedMapIndex;
        public bool IsEnteringMap;
    }
}
