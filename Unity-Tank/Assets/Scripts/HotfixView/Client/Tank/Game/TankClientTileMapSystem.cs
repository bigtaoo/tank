using MongoDB.Bson;
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

        [EntitySystem]
        private static void Update(this TankClientTileMapComponent self)
        {
            var mapTileComponent = self.Root().GetComponent<TankMapTilesComponent>();
            if (mapTileComponent.TilesToUpdate.Count > 0)
            {
                foreach (var tile in mapTileComponent.TilesToUpdate)
                {
                    // Log.Warning($"Client UI Remove tile x {tile.X}, y: {tile.Y}, type: {tile.Type}");
                    var position = new Vector3Int(tile.X - TankConsts.TileOffset, tile.Y - TankConsts.TileOffset, 0);
                    if (tile.Type == TankMapTileType.None)
                    {
                        // Log.Warning($"Client UI Remove tile x {tile.X}, y: {tile.Y}");
                        self.Tilemap.SetTile(position, null);
                    }
                    else if (tile.Type == TankMapTileType.Steel)
                    {
                        self.Tilemap.SetTile(position, TankTileResource.Instance.GetTileResource(TankMapTileType.Steel));
                    }
                    else if (tile.Type == TankMapTileType.Wall)
                    {
                        self.Tilemap.SetTile(position, TankTileResource.Instance.GetTileResource(TankMapTileType.Wall));
                    }
                }
                mapTileComponent.TilesToUpdate.Clear();
            }
        }

        private static void InitializeTileMap(this TankClientTileMapComponent self)
        {
            var tiles = new ListComponent<TankMapTile>();
            var bounds = self.Tilemap.cellBounds;
            //Log.Warning($"tile map bounds: {bounds.ToJson()}");

            for (var x = bounds.xMin; x < bounds.xMax; x++)
            {
                for (var y = bounds.yMin; y < bounds.yMax; y++)
                {
                    var tilePosition = new Vector3Int(x, y, 0);
                    var tile = self.Tilemap.GetTile(tilePosition);
                    if (tile != null && tile is TankTile tankTile)
                    {
                        var tankMapTile = new TankMapTile(x + TankConsts.TileOffset, y + TankConsts.TileOffset, tankTile.TileType);
                        tiles.Add(tankMapTile);
                    }
                }
            }

            var tankMapTileComponent = self.Root().GetComponent<TankMapTilesComponent>();
            tankMapTileComponent.InitializeMapTiles(tiles, self.Tilemap.cellSize.x, self.Tilemap.cellSize.y);

            var topleft = GameObject.Find("topleft").GetComponent<Transform>().position;
            var buttomright = GameObject.Find("buttomright").GetComponent<Transform>().position;
            tankMapTileComponent.MapBound = new TankMapBound
            {
                Top = topleft.y + TankConsts.TileOffset,
                Bottom = buttomright.y + TankConsts.TileOffset,
                Left = topleft.x + TankConsts.TileOffset,
                Right = buttomright.x + TankConsts.TileOffset,
            };
            Log.Info($"map bound: {tankMapTileComponent.MapBound.ToJson()}");
        }
    }
}