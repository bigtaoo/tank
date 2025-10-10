namespace ET
{
    [EnableClass]
    [System.Serializable]
    public class TankUserInfo
    {
        public int CurrentMapIndex;
        public int Gold;
        public int TankMoveSpeedLevel { get; set; } = 0;
        public int BulletMoveSpeedLevel { get; set; } = 0;
        public int TankShootSpeedLevel { get; set;} = 0;
    }
}