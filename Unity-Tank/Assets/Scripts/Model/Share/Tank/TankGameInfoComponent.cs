namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankGameInfoComponent : Entity, IAwake
    {
        public TankGameInfo GameInfo { get; set; }
    }
}