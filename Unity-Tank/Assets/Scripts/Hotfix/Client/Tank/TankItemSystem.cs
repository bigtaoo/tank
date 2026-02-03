using System.Collections.Generic;
using TankLogic;

namespace ET
{
    [EntitySystemOf(typeof(TankItemComponent))]
    [FriendOf(typeof(TankItemComponent))]
    public static partial class TankItemSystem
    {
        [EntitySystem]
        private static void Awake(this TankItemComponent self)
        {

        }

        public static void UpdateSCItemInfo(this TankItemComponent self, List<SCItemInfo> itemInfos)
        {
            // Log.Warning($"Logic item count: {itemInfos.Count}, client item count: {self.Items.Count}");
            self.TempCache.Clear();
            foreach (var item in self.Items.Keys)
            {
                // Log.Warning($"Client item key: {item}");
                var toRemove = true;
                foreach (var info in itemInfos)
                {
                    if (info.ItemId == item)
                    {
                        toRemove = false;
                        break;
                    }
                }
                if (toRemove)
                {
                    self.ItemsToRemove.Add(self.Items[item]);
                    self.TempCache.Add(item);
                    // Log.Warning($"Remove client item id: {item}");
                }
            }
            foreach (var key in self.TempCache)
            {
                self.Items.Remove(key);
            }
            foreach (var itemInfo in itemInfos)
            {
                // Log.Warning($"Find client item: {findItem == null}");
                var toAdd = true;
                foreach (var item in self.Items.Values)
                {
                    if (item.ItemId == itemInfo.ItemId)
                    {
                        toAdd = false;
                        break;
                    }
                }
                if (toAdd)
                {
                    var item = new TankItem
                    {
                        ItemId = itemInfo.ItemId,
                        ItemType = itemInfo.ItemType switch
                        {
                            ItemType.Bomb => TankItemType.Bomb,
                            ItemType.BaseWallUpgrade => TankItemType.BaseWallUpgrade,
                            ItemType.Gold => TankItemType.Gold,
                            ItemType.PlayerLife => TankItemType.PlayerLife,
                            ItemType.PlayerTankLevelUp => TankItemType.PlayerTankLevelUp,
                            ItemType.Shield => TankItemType.Shield,
                            ItemType.TimeStop => TankItemType.TimeStop,
                            _ => TankItemType.None,
                        },
                        LivingEndTime = TimeInfo.Instance.ClientFrameTime() + TankConsts.ItemLivingMS,
                        Position = new TankPosition { X = itemInfo.X / 1000.0f, Y = itemInfo.Y / 1000.0f },
                    };
                    self.Items[item.ItemId] = item;
                    self.ItemsToAdd.Add(item);
                    // Log.Info($"Spawn client item: {item.ItemId}");
                }
            }
        }
    }
}