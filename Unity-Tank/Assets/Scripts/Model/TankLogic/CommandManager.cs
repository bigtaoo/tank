using System.Collections.Generic;

namespace TankLogic
{
    public sealed class CommandManager
    {
        private readonly Main _main;
        private readonly Queue<Command> _newCommands = new();
        private readonly List<Command> _executedCommands = new();

        public CommandManager(Main main)
        {
            _main = main;
        }

        public void AddCommand(Command command)
        {
            _newCommands.Enqueue(command);
        }

        public void UpdateCommands()
        {
            while (_newCommands.Count != 0)
            {
                var command = _newCommands.Peek();
                if (command.Frame > _main.Frame)
                {
                    return;
                }
                command = _newCommands.Dequeue();
                switch (command)
                {
                    case InitializeMapCommand initializeMap:
                        {
                            _main.TileManager.SetMapBound(initializeMap.MapBound);
                            foreach (var tile in initializeMap.TileInfos)
                            {
                                _main.TileManager.AddTileInfo(tile.TileType, tile.Position.X, tile.Position.Y);
                            }
                            break;
                        }
                    case InitializePlayerCommand initializePlayer:
                        {
                            _main.PlayerManager.SetInitiaInfo(initializePlayer.SpwanPosition, initializePlayer.MoveSpeed,
                             initializePlayer.BulletMoveSpeed, initializePlayer.ShootCoolDownTime);
                            break;
                        }
                    case MoveCommand move:
                        {
                            break;
                        }
                    case ShootCommand shoot:
                        {
                            break;
                        }
                    default:
                        {
                            break;
                        }
                }

                _executedCommands.Add(command);
            }
        }
    }
}
