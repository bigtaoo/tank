using System.Collections.Generic;

namespace TankLogic
{
    internal class RobotManager
    {
        private readonly Main _main;
        internal List<RobotTank> Robots { get; private set; } = new();
        internal List<RobotSpawnInfo> RobotSpawnInfos { get; private set; } = new();

        internal RobotManager(Main main)
        {
            _main = main;
        }

        internal void SetRobotSpawnInfos(List<RobotSpawnInfo> robotSpawnInfos)
        {
            
        }

        internal void UpdateRobots()
        {
            
        }
    }
}