using UnityEngine;
using UnityEngine.Tilemaps;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankClientTileMapComponent))]
    [FriendOf(typeof(TankClientTileMapComponent))]
    public static partial class TankClientTileMapSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientTileMapComponent self)
        {
            var tileMap = GameObject.FindFirstObjectByType<Tilemap>();
            if (tileMap == null)
            {
                Log.Error("No tile map can be found!!!");
            }
            self.Tilemap = tileMap;

            self.InitializeTileMap();
        }

        private static void InitializeTileMap(this TankClientTileMapComponent self)
        {
            var tiles = new ListComponent<TankMapTile>();
            var bounds = self.Tilemap.cellBounds;

            for (var x = bounds.xMin; x < bounds.xMax; x++)
            {
                for (var y = bounds.yMin; y < bounds.yMax; y++)
                {
                    var tilePosition = new Vector3Int(x, y, 0);
                    var tile = self.Tilemap.GetTile(tilePosition);
                    if (tile != null && tile is TankTile tankTile)
                    {
                        var tankMapTile = new TankMapTile
                        {
                            X = x,
                            Y = y,
                            Type = tankTile.TileType,
                        };
                        tiles.Add(tankMapTile);
                    }
                }
            }

            var tankMapTileComponent = self.Root().GetComponent<TankMapTilesComponent>();
            tankMapTileComponent.InitializeMapTiles(tiles, self.Tilemap.cellSize.x, self.Tilemap.cellSize.y);
        }
    }
}