namespace ET
{
    [EntitySystemOf(typeof(TankLogicComponent))]
    [FriendOf(typeof(TankLogicComponent))]
    public static partial class TankLogicSystem
    {
        [EntitySystem]
        private static void Awake(this ET.TankLogicComponent self)
        {

        }
        
        [EntitySystem]
        private static void Update(this ET.TankLogicComponent self)
        {

        }
    }
}