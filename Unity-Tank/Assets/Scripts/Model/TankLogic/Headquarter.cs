using System.Collections.Generic;

namespace TankLogic
{
    internal class Headquarter
    {
        private List<Position> Walls;

        internal Headquarter()
        {
            Walls = new List<Position>
            {
                new(98, 90),
                new(98, 91),
                new(98, 92),
                new(99, 92),
                new(100, 92),
                new(101, 92),
                new(101, 91),
                new(101, 90),
            };
        }
    }
}