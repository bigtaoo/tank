namespace ET
{
    [EnableClass]
    public class TankGameInfo
    {
        public int Gold { get; set; }
        public int MapIndex { get; set; }
        public string GameStartTime { get; set; }
        public string GameEndTime { get; set; }
        public bool IsWin { get; set; }
    }
}