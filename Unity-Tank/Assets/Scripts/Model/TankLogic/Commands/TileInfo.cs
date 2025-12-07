namespace TankLogic
{
    public class TileInfo
    {
        internal TileType TileType { get; private set; }
        internal Position Position { get; private set; }

        public TileInfo(TileType tileType, int X, int Y)
        {
            TileType = tileType;
            Position = new Position(X, Y);
        }
    }
}