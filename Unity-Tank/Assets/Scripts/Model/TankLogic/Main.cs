namespace TankLogic
{
    public class Main
    {
        public RobotManager RobotManager { get; private set; }
        public PlayerManager PlayerManager { get; private set; }
        public RandomGenerator Random { get; private set; }
        public CommandManager CommandManager{ get; private set; }

        public Main(ulong seed)
        {
            RobotManager = new RobotManager(this);
            PlayerManager = new PlayerManager(this);
            Random = new RandomGenerator(seed);
            CommandManager = new CommandManager(this);
        }
    }
}
