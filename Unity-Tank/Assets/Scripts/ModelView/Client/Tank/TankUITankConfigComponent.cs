using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUITankConfigComponent : Entity, IAwake
    {
        public GameObject Back;
    }
}