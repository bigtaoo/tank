using TankLogic;

namespace ET
{
    public static class CommandHelper
    {
        public static TileType GetTileType(TankMapTileType tileType)
        {
            return tileType switch
            {
                TankMapTileType.Wall => TileType.Wall,
                TankMapTileType.Grass => TileType.Grass,
                TankMapTileType.Steel => TileType.Steel,
                TankMapTileType.Water => TileType.Water,
                _ => TileType.None,
            };
        }
    }
}