namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientGameInfoComponent : Entity, IAwake
    {
        public bool InputMutex { get; set; }
    }
}