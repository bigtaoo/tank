using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankRobotComponent : Entity, IAwake
    {
        public Dictionary<uint, TankRobot> Robots { get; set; } = new();
        public ListComponent<TankRobotSpawnInfo> SpawnInfos { get; set; } = new();
        public ListComponent<TankRobot> RobotsToAdd { get; set; } = new();
        public ListComponent<TankRobot> RobotsToRemove { get; set; } = new();
        // public long LastFrameTime { get; set; }
        // public int RobotId { get; set; }
        public int BasicShootInterval { get; } = 3 * 1000;
        public int[] RemainingRobotsCount { get; set; } = new int[TankInitialConfig.RobotTypies];
        public int[] RemainingSpawnRobots { get; set; } = new int[TankInitialConfig.RobotTypies];
    }
}