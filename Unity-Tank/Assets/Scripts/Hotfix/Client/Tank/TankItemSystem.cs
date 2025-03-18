using MongoDB.Bson;
using System.Linq;

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

        [EntitySystem]
        private static void Update(this TankItemComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach(var key in self.Items.Keys.ToList())
            {
                var item = self.Items[key];
                if (item.LivingEndTime < currentTime)
                {
                    self.RemoveItem(key);
                }
            }
        }

        public static void SpawnItem(this TankItemComponent self, TankPosition position)
        {
            var spawnItemRate = RandomGenerator.RandUInt32() % 100;
            Log.Warning($"Item spawn rate: {spawnItemRate}");
            if (spawnItemRate > TankConsts.SpawnItemRate)
            {
                return;
            }
            var itemIndex = RandomGenerator.RandUInt32() % self.SpawnItemTypes.Length;
            var itemType = self.SpawnItemTypes[itemIndex];

            var item = new TankItem
            {
                ItemId = self.ItemId++,
                ItemType = itemType,
                LivingEndTime = TimeInfo.Instance.ClientFrameTime() + TankConsts.ItemLivingMS,
                Position = position,
            };
            self.Items[item.ItemId] = item;
            self.ItemsToAdd.Add(item);
            Log.Warning($"Spawn item: {item.ToJson()}");
        }

        public static void PickUpItem(this TankItemComponent self, int itemId)
        {
            self.RemoveItem(itemId);
        }

        private static void RemoveItem(this TankItemComponent self, int itemId)
        {
            self.Items.Remove(itemId);
            self.ItemsToRemove.Add(itemId);
        }
    }
}