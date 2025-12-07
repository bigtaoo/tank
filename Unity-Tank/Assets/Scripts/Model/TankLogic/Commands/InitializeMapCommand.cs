using System.Collections.Generic;

namespace TankLogic
{
    public class InitializeMapCommand : Command
    {
        internal MapBound MapBound { get; private set; }
        internal List<TileInfo> TileInfos { get; private set; } = new();

        public InitializeMapCommand()
        {
        }

        public void SetMapBound(int top, int bottom, int left, int right)
        {
            MapBound = new MapBound(top, left, right, bottom);
        }

        public void AddTileInfo(TileInfo tileInfo)
        {
            TileInfos.Add(tileInfo);
        }
    }
}