using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankItemComponent : Entity, IAwake
    {
        public Dictionary<int, TankItem> Items { get; set; } = new Dictionary<int, TankItem>();
        public ListComponent<TankItem> ItemsToAdd { get; set; } = new ListComponent<TankItem>();
        public ListComponent<TankItem> ItemsToRemove { get; set; } = new ListComponent<TankItem>();
        public int ItemId { get; set; } = 0;
        public TankItemType[] SpawnItemTypes { get; private set; } = {
            TankItemType.Bomb, 
            TankItemType.BaseWallUpgrade,
            TankItemType.PlayerTankLevelUp,
            TankItemType.PlayerLife,
            TankItemType.Shield,
            TankItemType.TimeStop,
            TankItemType.Gold,
            TankItemType.Gold,
            TankItemType.Gold,
            TankItemType.Gold,
            TankItemType.Gold,
        };
    }
}