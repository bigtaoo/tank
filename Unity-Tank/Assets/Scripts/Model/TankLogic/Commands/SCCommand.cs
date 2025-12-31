using System.Collections.Generic;

namespace TankLogic
{
    public class SCCommand
    {
        public List<SCTankInfo> TankInfos { get; set; } = new();
        public List<SCBulletInfo> BulletInfos { get; set; } = new();
        public List<SCTileInfo> TileInfos { get; set; } = new();

        public void ClearData()
        {
            TankInfos.Clear();
            BulletInfos.Clear();
            TileInfos.Clear();
        }
    }
}