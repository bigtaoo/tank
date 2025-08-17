namespace ET
{
    [EntitySystemOf(typeof(TankGameInfoComponent))]
    [FriendOf(typeof(TankGameInfoComponent))]
    public static partial class TankGameInfoSystem
    {
        [EntitySystem]
        private static void Awake(this TankGameInfoComponent self)
        {

        }

        public static void AddGold(this TankGameInfoComponent self)
        {
            self.GameInfo.Gold++;
        }
    }
}