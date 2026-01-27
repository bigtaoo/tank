using ET.Client;
using MongoDB.Bson;
using System.Collections.Generic;
using System.Linq;
using TankLogic;
using Unity.Mathematics;

namespace ET
{
    [EntitySystemOf(typeof(TankItemComponent))]
    [FriendOf(typeof(TankItemComponent))]
    public static partial class TankItemSystem
    {
        [EntitySystem]
        private static void Awake(this TankItemComponent self)
        {
            self.ItemId = 10;
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
            foreach (var item in self.Items.Keys.ToList())
            {
                var findItem = itemInfos.FirstOrDefault(i => i.ItemId == item);
                if (findItem == null)
                {
                    self.ItemsToRemove.Add(self.Items[item]);
                    self.Items.Remove(item);
                }
            }
            foreach (var itemInfo in itemInfos)
            {
                var findItem = self.Items.Values.FirstOrDefault(i => i.ItemId == itemInfo.ItemId);
                if (findItem == null)
                {
                    var item = new TankItem
                    {
                        ItemId = self.ItemId++,
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
                        Position = new TankPosition { X = itemInfo.X, Y = itemInfo.Y },
                    };
                    self.Items[item.ItemId] = item;
                    self.ItemsToAdd.Add(item);
                    Log.Info($"Spawn item: {item.ToJson()}");
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