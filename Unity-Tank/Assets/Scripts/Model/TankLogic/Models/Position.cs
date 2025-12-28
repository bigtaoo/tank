namespace TankLogic
{
    internal class Position
    {
        internal int X { get; set; }
        internal int Y { get; set; }

        internal Position(int x, int y)
        {
            X = x;
            Y = y;
        }

        internal Position Copy()
        {
            return new Position(X, Y);
        }
    }
}