namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankBaseComponent : Entity, IAwake
    {
        public TankPosition BasePosition { get; set; }
        public ListComponent<TankPosition> BaseWalls { get; set; }
    }
}
