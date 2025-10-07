namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankGameInfoComponent : Entity, IAwake
    {
        public TankGameInfo GameInfo { get; set; } = new TankGameInfo();

        public int TotalGold { get; set; } = 0;
        public int TankMoveSpeedLevel { get; set; } = 0;
        public int BulletMoveSpeedLevel { get; set; } = 0;
        public int TankShootSpeedLevel { get; set;} = 0;
    }
}