namespace TankLogic
{
    public class SCGameInfo
    {
        public int PlayerLifes { get; set; }
        public int[] RemainingRobotsCount { get; set; } = new int[3];
        public int Gold { get; set; }
        public bool IsGameEnd { get; set; }
    }
}