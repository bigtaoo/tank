using System.Collections.Generic;

namespace TankLogic
{
    public class InitializeRobotsCommand : Command
    {
        internal List<RobotSpawnInfo> RobotSpawnInfos { get; private set; } = new();

        public InitializeRobotsCommand()
        {
            
        }

        public void AddRobotSpawnInfo(RobotSpawnInfo info)
        {
            RobotSpawnInfos.Add(info);
        }
    }
}