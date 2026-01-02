using MongoDB.Bson;
using System.Linq;

namespace ET
{
    [EntitySystemOf(typeof(TankMapTilesComponent))]
    [FriendOf(typeof(TankMapTilesComponent))]
    public static partial class TankMapTilesSystem
    {
        [EntitySystem]
        private static void Awake(this TankMapTilesComponent self)
        {

        }

        public static void InitializeMapTiles(this TankMapTilesComponent self, ListComponent<TankMapTile> tiles, float tileWidth, float tileHeight)
        {
            self.Tiles = tiles;
            self.TileWidth = tileWidth;
            self.TileHeight = tileHeight;

            Log.Info($"width: {tileWidth}, height: {tileHeight}, tiles: {tiles.ToJson()},");
        }

        public static bool IsInMap(this TankMapTilesComponent self, TankPosition position, float collision)
        {
            return position.X >= self.MapBound.Left + collision && position.X <= self.MapBound.Right - collision &&
                position.Y >= self.MapBound.Bottom + collision && position.Y <= self.MapBound.Top - collision;
        }

        public static TankMapTile GetTile(this TankMapTilesComponent self, TankPosition position)
        {
            return self.Tiles.Where(t => t.X == (int)position.X && t.Y == (int)position.Y).FirstOrDefault();
        }

        public static void SetTileType(this TankMapTilesComponent self, int x, int y, TankMapTileType tileType)
        {
            // Log.Warning($"Update client tile: x {x}, y: {y}, type: {tileType}");
            var tile = self.Tiles.FirstOrDefault(t => t.X == x && t.Y == y);
            if (tile == null)
            {
                tile = new TankMapTile(x, y, tileType);
                self.Tiles.Add(tile);
            }
            else if (tileType == TankMapTileType.None)
            {
                // Log.Warning($"client logic remove tile: x {x}, y {y}");
                tile.Type = TankMapTileType.None;
                self.Tiles.Remove(tile);
            }
            else
            {
                tile.Type = tileType;
            }

            self.TilesToUpdate.Add(tile);
        }
    }
}