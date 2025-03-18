using MongoDB.Bson;
using System.Linq;
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

        [EntitySystem]
        private static void Update(this TankItemComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach(var key in self.Items.Keys.ToList())
            {
                var item = self.Items[key];
                if (item.LivingEndTime < currentTime)
                {
                    self.RemoveItem(item);
                }
            }

            self.PickUpItem();
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

        private static void PickUpItem(this TankItemComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var playerPosition = playerComponent.Position;

            foreach (var item in self.Items.Values)
            {
                if (math.abs(playerPosition.X - item.Position.X) < 0.5f &&
                    math.abs(playerPosition.Y - item.Position.Y) < 0.5f)
                {
                    self.RemoveItem(item);
                    break;
                }
            }
        }

        private static void RemoveItem(this TankItemComponent self, TankItem item)
        {
            self.ItemsToRemove.Add(item);
            self.Items.Remove(item.ItemId);
        }
    }
}