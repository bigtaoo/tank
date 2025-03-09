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

        [EntitySystem]
        private static void Update(this TankItemComponent self)
        {

        }

        public static void SpawnItem(this TankItemComponent self, TankPosition position)
        {
            var spawnItemRate = RandomGenerator.RandUInt32() % 100;
            if (spawnItemRate < TankConsts.SpawnItemRate)
            {
                return;
            }
            var itemIndex = RandomGenerator.RandUInt32() % self.SpawnItemTypes.Length;
            var itemType = self.SpawnItemTypes[itemIndex];
        }
    }
}