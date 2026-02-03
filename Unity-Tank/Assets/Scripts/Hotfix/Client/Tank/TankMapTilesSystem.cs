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

            // Log.Info($"width: {tileWidth}, height: {tileHeight}, tiles: {tiles.ToJson()},");
        }

        public static void SetTileType(this TankMapTilesComponent self, int x, int y, TankMapTileType tileType)
        {
            // Log.Warning($"Update client tile: x {x}, y: {y}, type: {tileType}");
            TankMapTile tile = null;
            foreach (var t in self.Tiles)
            {
                if (t.X == x && t.Y == y)
                {
                    tile = t;
                    break;
                }
            }
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