using System.Collections.Generic;

namespace TankLogic
{
    public sealed class CommandManager
    {
        private readonly Main _main;
        private readonly List<Command> _commands = new();

        public CommandManager(Main main)
        {
            _main = main;
        }

        public void AddCommand(Command command)
        {
            _commands.Add(command);
        }

        public void UpdateCommands()
        {
            
        }
    }
}
