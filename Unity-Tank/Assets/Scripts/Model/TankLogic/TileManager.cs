using System.Collections.Generic;

namespace TankLogic
{
    internal class TileManager
    {
        private readonly Main _main;
        private MapBound _mapBound;
        private Dictionary<uint, Tile> _tiles = new();

        internal TileManager(Main main)
        {
            _main = main;
        }

        public void SetMapBound(MapBound mapBound)
        {
            _mapBound = mapBound;
        }

        internal bool IsInMap(Position position, int collision)
        {
            return position.X >= _mapBound.Left + collision && position.X <= _mapBound.Right - collision &&
                position.Y >= _mapBound.Bottom + collision && position.Y <= _mapBound.Top - collision;
        }

        internal Tile GetTile(Position position)
        {
            return null;
        }
    }
}