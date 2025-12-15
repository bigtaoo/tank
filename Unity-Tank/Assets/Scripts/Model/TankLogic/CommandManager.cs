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
                    case InitializeRobotsCommand initializeRobots:
                        {
                            _main.RobotManager.SetRobotSpawnInfos(initializeRobots.RobotSpawnInfos);
                            break;
                        }
                    case MoveCommand move:
                        {
                            _main.PlayerManager.ExecuteMoveCommand(move);
                            break;
                        }
                    case ShootCommand shoot:
                        {
                            _main.PlayerManager.ExecuteShootCommand(shoot);
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
