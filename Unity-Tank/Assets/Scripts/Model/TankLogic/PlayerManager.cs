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

        internal void UpdatePlayers()
        {
            
        }

        internal void SetInitiaInfo(Position spawnPostion, int moveSpeed, int bulletSpeed, uint shootCoolDownTime)
        {
            foreach (PlayerTank player in Players)
            {
                player.SetInitiaInfo(spawnPostion, moveSpeed, bulletSpeed, shootCoolDownTime);
            }
        }
    }
}