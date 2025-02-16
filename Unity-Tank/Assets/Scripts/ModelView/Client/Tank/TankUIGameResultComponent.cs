using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameResultComponent : Entity, IAwake
    {
        public GameObject Result;
        public GameObject Back;
    }
}