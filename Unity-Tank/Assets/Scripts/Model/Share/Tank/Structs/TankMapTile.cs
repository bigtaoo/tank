namespace ET
{
    [EnableClass]
    public class TankMapTile
    {
        public int X { get; set; }
        public int Y { get; set; }
        public TankMapTileType Type { get; set; }

        public TankMapTile(int x, int y, TankMapTileType type)
        {
            X = x;
            Y = y;
            Type = type;
        }
    }
}