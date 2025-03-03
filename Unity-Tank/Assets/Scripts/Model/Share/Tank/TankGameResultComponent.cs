namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankGameResultComponent : Entity, IAwake
    {
        public bool IsWin { get; set; } = true;
        public bool IsGameEnd { get; set; } = false;
    }
}