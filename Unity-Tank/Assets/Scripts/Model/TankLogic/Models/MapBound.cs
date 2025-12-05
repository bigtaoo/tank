namespace TankLogic
{
    internal class MapBound
    {
        internal int Top { get; private set; }
        internal int Left { get; private set;}
        internal int Right { get; private set;}
        internal int Bottom { get; private set;}

        internal MapBound(int top, int left, int right, int bottom)
        {
            Top = top;
            Left = left;
            Right = right;
            Bottom = bottom;
        }
    }
}