using MongoDB.Bson;
using System.Linq;

namespace ET.Client
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
    }
}