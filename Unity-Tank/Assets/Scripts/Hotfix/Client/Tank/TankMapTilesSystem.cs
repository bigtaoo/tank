using MongoDB.Bson;

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

            Log.Warning($"width: {tileWidth}, height: {tileHeight}, tiles: {tiles.ToJson()},");
        }
    }
}