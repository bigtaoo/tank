using System.Collections.Generic;
using System.Linq;
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
            // self.ItemId = 10;
        }

        // [EntitySystem]
        // private static void Update(this TankItemComponent self)
        // {
        //     var currentTime = TimeInfo.Instance.ClientFrameTime();
        //     foreach(var key in self.Items.Keys.ToList())
        //     {
        //         var item = self.Items[key];
        //         if (item.LivingEndTime < currentTime)
        //         {
        //             self.RemoveItem(item);
        //         }
        //     }
        // }

        public static void UpdateSCItemInfo(this TankItemComponent self, List<SCItemInfo> itemInfos)
        {
            // Log.Warning($"Logic item count: {itemInfos.Count}, client item count: {self.Items.Count}");
            foreach (var item in self.Items.Keys.ToList())
            {
                // Log.Warning($"Client item key: {item}");
                var findItem = itemInfos.FirstOrDefault(i => i.ItemId == item);
                if (findItem == null)
                {
                    self.ItemsToRemove.Add(self.Items[item]);
                    self.Items.Remove(item);
                    // Log.Warning($"Remove client item id: {item}");
                }
            }
            foreach (var itemInfo in itemInfos)
            {
                var findItem = self.Items.Values.FirstOrDefault(i => i.ItemId == itemInfo.ItemId);
                // Log.Warning($"Find client item: {findItem == null}");
                if (findItem == null)
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

        // public static void SpawnItem(this TankItemComponent self, TankPosition position)
        // {
        //     var spawnItemRate = RandomGenerator.RandUInt32() % 100;
        //     Log.Info($"Item spawn rate: {spawnItemRate}");
        //     if (spawnItemRate > TankConsts.SpawnItemRate)
        //     {
        //         return;
        //     }
        //     var itemIndex = RandomGenerator.RandUInt32() % self.SpawnItemTypes.Length;
        //     var itemType = self.SpawnItemTypes[itemIndex];

        //     var item = new TankItem
        //     {
        //         ItemId = self.ItemId++,
        //         ItemType = itemType,
        //         LivingEndTime = TimeInfo.Instance.ClientFrameTime() + TankConsts.ItemLivingMS,
        //         Position = position,
        //     };
        //     self.Items[item.ItemId] = item;
        //     self.ItemsToAdd.Add(item);
        //     Log.Info($"Spawn item: {item.ToJson()}");
        // }

        // private static void RemoveItem(this TankItemComponent self, TankItem item)
        // {
        //     self.ItemsToRemove.Add(item);
        //     self.Items.Remove(item.ItemId);
        // }
    }
}