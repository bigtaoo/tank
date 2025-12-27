using System.Collections.Generic;

namespace TankLogic
{
    public class SCCommand
    {
        public List<SCTankInfo> TankInfos { get; set; } = new();

        public void ClearData()
        {
            TankInfos.Clear();
        }
    }
}