using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameModeComponent : Entity, IAwake
    {
        public GameObject DigitDisplay;
        public GameObject MapIndex;
        public GameModeConfig Config;
    }
}
