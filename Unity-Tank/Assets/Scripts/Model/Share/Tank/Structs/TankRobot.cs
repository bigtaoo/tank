namespace ET
{
    [EnableClass]
    public class TankRobot
    {
        public int RobotId { get; set; }
        public int SpawnPointId { get; set; }
        public TankPosition Position { get; set; }
        public TankDirection Direction { get; set; }
        public long ShootInterval { get; set; }
        public long ShootTime { get; set; }
        public float MoveSpeed { get; set; }
        public int Rotation { get; set; }
        public TankPosition TargetPosition { get; set; }
        public int HealthPoint { get; set; }
        public int Level { get; set; }
    }
}