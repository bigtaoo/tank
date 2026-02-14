using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIStartSiteComponent : Entity, IAwake
    {
        public GameObject SingleMode;
        public GameObject Multiplayer;
        public GameObject Challenge;
        public GameObject Settings;
        public GameObject Shop;
        public GameObject Information;
    }
}