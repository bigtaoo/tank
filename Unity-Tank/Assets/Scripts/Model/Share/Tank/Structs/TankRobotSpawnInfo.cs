namespace ET
{
    [EnableClass]
    public class TankRobotSpawnInfo
    {
        public int SpawnPointId { get; set; }
        public TankPosition SpawnPosition {  get; set; }
        public int Rotation { get; set; }
        public int RobotCount { get; set; }
        public long SpawnInterval { get; set; }
        public int RobotLevel { get; set; }
        public long SpawnTime { get; set; }
    }
}