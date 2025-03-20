namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankGameInfoComponent : Entity, IAwake
    {
        public int Gold { get; set; }
    }
}