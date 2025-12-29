using System.Collections.Generic;

namespace TankLogic
{
    internal class TileManager
    {
        private readonly Main _main;
        private MapBound _mapBound;
        private Dictionary<int, Tile> _tiles = new();

        internal TileManager(Main main)
        {
            _main = main;
        }

        internal void UpdateTiles()
        {
            
        }

        internal void SetMapBound(MapBound mapBound)
        {
            _mapBound = mapBound;
        }

        internal void AddTileInfo(TileType tileType, int x, int y)
        {
            var index = GetTileIndex(x, y);
            var tile = new Tile(new Position(x, y), tileType);
            _tiles.Add(index, tile);
        }

        internal bool IsInMap(int x, int y, int collision)
        {
            x /= 1000;
            y /= 1000;
            return x >= _mapBound.Left + collision && x <= _mapBound.Right -1 - collision &&
                y >= _mapBound.Bottom + collision && y <= _mapBound.Top - 1 - collision;
        }

        internal Tile GetTile(int x, int y)
        {
            int index = GetTileIndex(x, y);
            if (_tiles.TryGetValue(index, out Tile tile))
            {
                return tile;
            }
            return null;
        }

        internal void UpdateTile(int x, int y, TileType tileType)
        {
            int index = GetTileIndex(x, y);
            _tiles.Remove(index);
            if(tileType != TileType.None)
            {
                AddTileInfo(tileType, x, y);
            }
        }

        private int GetTileIndex(int x, int y)
        {
            return y * 10000 + x;
        }
    }
}