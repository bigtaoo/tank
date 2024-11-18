using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class TankCameraComponent : Entity, IAwake
    {
        public Camera Camera { get; set; }
    }
}