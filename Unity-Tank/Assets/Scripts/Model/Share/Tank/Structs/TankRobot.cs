namespace ET
{
    [EnableClass]
    public class TankRobot
    {
        public int SpawnPointId { get; set; }
        public TankPosition Position { get; set; }
        public TankDirection Direction { get; set; }
        public long ShootInterval { get; set; }
        public long ShootTime { get; set; }
    }
}