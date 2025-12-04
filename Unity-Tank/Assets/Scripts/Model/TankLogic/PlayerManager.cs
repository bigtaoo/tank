using System.Collections.Generic;

namespace TankLogic
{
    internal class PlayerManager
    {
        private readonly Main _main;
        internal List<PlayerTank> Players { get; private set; } = new();

        internal PlayerManager(Main main)
        {
            _main = main;
        }
    }
}