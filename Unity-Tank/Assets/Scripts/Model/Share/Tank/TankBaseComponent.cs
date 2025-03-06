namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankBaseComponent : Entity, IAwake, IUpdate
    {
        public TankPosition BasePosition { get; set; }
    }
}
