namespace TankLogic
{
    internal class Tile
    {
        internal Position Position { get; private set; }
        internal TileType TileType { get; private set; }

        internal Tile(Position position, TileType tileType)
        {
            Position = position;
            TileType = tileType;
        }
    }
}