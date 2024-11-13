namespace ET.Client
{
    [EntitySystemOf(typeof(GameTankComponent))]
    [FriendOf(typeof(GameTankComponent))]
    public static partial class GameTankSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.GameTankComponent self)
        {

        }
        [EntitySystem]
        private static void Update(this ET.Client.GameTankComponent self)
        {

        }
    }
}