using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientAttachedEffectComponent : Entity, IAwake, IUpdate
    {
        public Dictionary<uint, GameObject> Effects = new();
        public Stack<GameObject> CachedEffects = new();
        public Sprite InvincibleBuffSprite;
    }
}