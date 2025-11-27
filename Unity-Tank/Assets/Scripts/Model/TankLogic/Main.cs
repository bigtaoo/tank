namespace TankLogic
{
    public class Main
    {
        public RobotManager RobotManager { get; private set; }
        public PlayerManager PlayerManager { get; private set; }
        public RandomGenerator Random { get; private set; }
        public CommandManager CommandManager { get; private set; }
        public ProjectileManager ProjectileManager { get; private set; }
        public EffectManager EffectManager { get; private set; }
        public uint Frame { get; private set; }
        public const uint FrameTime = 20;

        public Main(ulong seed)
        {
            RobotManager = new RobotManager(this);
            PlayerManager = new PlayerManager(this);
            Random = new RandomGenerator(seed);
            CommandManager = new CommandManager(this);
            ProjectileManager = new ProjectileManager(this);
            EffectManager = new EffectManager(this);
        }
    }
}
