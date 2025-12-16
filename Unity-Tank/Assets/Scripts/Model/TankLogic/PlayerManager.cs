using System.Collections.Generic;
using System.Linq;

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
            var playerData = new PlayerData
            {
                SpawnPosition = spawnPostion,
                PlayerLifes = 3,
                CurrentPosition = spawnPostion,
                MoveDirection = Direction.None,
                CurrentDirection = Direction.None,
                MoveSpeed = moveSpeed,
                BulletSpeed = bulletSpeed,
                Level = 1,
                LastShootTime = _main.GameTime,
                ShootCoolDownTime = shootCoolDownTime,
            };
            var player = new PlayerTank(playerData, _main, _main.GetId());
            Players.Add(player);  
        }

        internal void ExecuteMoveCommand(MoveCommand moveCommand)
        {
            var player = Players.First();
            player.SetMoveDirection(moveCommand.Direction);

            _main.Logger.Warning($"Move command: {moveCommand.Direction}");
        }

        internal void ExecuteShootCommand(ShootCommand shootCommand)
        {
            var player = Players.First();
            player.Shoot();
        }
    }
}