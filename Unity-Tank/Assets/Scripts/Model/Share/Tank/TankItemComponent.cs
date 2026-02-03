using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankItemComponent : Entity, IAwake
    {
        public Dictionary<uint, TankItem> Items { get; set; } = new();
        public ListComponent<TankItem> ItemsToAdd { get; set; } = new();
        public ListComponent<TankItem> ItemsToRemove { get; set; } = new();
        public ListComponent<uint> TempCache { get; set; } = new();
    }
}