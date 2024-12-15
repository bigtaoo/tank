namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankRobotComponent : Entity, IAwake, IUpdate
    {
        public ListComponent<TankRobot> Robots { get; set; } = new ListComponent<TankRobot>();
        public ListComponent<TankRobotSpawnInfo> SpawnInfos { get; set; } = new();
        public ListComponent<TankRobot> RobotsToAdd { get; set; } = new();
        public ListComponent<TankRobot> RobotsToRemove { get; set; } = new();
    }
}