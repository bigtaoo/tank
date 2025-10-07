using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUISettingsComponent : Entity, IAwake
    {
        public GameObject Back;
    }
}