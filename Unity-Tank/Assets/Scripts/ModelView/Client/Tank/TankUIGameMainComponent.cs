
using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUIGameMainComponent : Entity, IAwake
    {
        public GameObject RemainingLife;
    }
}
