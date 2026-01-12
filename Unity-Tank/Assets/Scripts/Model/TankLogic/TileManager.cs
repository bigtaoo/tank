using System.Collections.Generic;

namespace TankLogic
{
    internal class TileManager
    {
        private readonly Main _main;
        private MapBound _mapBound;
        private Dictionary<int, Tile> _tiles = new();
        internal List<Tile> UpdatedTiles { get; private set; } = new();

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
            return x >= _mapBound.Left + collision && x <= _mapBound.Right - collision &&
                y >= _mapBound.Bottom + collision && y <= _mapBound.Top - collision;
        }

        internal int GetTopBound()
        {
            return _mapBound.Top;
        }

        internal int GetRightBound()
        {
            return _mapBound.Right;
        }

        // internal bool IsTankOnTopOrRightEdge(int x, int y)
        // {
        //     x /= 1000;
        //     y /= 1000;
        //     _main.Logger.Warning($"x {x}, y {y}, top {_mapBound.Top}, right {_mapBound.Right}");
        //     if (x == _mapBound.Right - 1)
        //     {
        //         return y >= _mapBound.Bottom && y <= _mapBound.Top;
        //     }
        //     else if (y == _mapBound.Top - 1)
        //     {
        //         return x <= _mapBound.Right && x >= _mapBound.Left;
        //     }
        //     return false;
        // }

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

            UpdatedTiles.Add(new Tile(new Position(x, y), tileType));
        }

        private int GetTileIndex(int x, int y)
        {
            return y * 10000 + x;
        }
    }
}