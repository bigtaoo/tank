using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUINoteComponent : Entity, IAwake
    {
        public GameObject Close;
        public GameObject Info;
    }
}