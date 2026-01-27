using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientItemComponent : Entity, IAwake, IUpdate
    {
        // public Dictionary<TankItemType, GameObject> ItemTypeToGameObject {  get; set; } = new Dictionary<TankItemType, GameObject>();
        public Dictionary<TankItemType, List<GameObject>> AvaiableItemResources { get; set; } = new();
        public Dictionary<uint, GameObject> Items { get; set; } = new();
    }
}