using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIInformationComponent : Entity, IAwake
    {
        public GameObject Close;
        public GameObject Info;
    }
}