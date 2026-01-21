using TankLogic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankGameInfoComponent : Entity, IAwake
    {
        public TankGameInfo GameInfo { get; set; } = new TankGameInfo();
        public ILogger TankLogicUnityLogger { get; set; }
        public bool IsGameEnd { get; set; }
        public bool IsGameResultUIShowed { get; set; }
    }
}