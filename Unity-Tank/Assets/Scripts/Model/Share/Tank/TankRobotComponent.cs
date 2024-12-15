namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankRobotComponent : Entity, IAwake, IUpdate
    {
        public ListComponent<TankRobot> Robots { get; set; } = new ListComponent<TankRobot>();
        public ListComponent<TankRobotSpawnInfo> SpawnInfo { get; set; } = new();
    }
}