namespace TankLogic
{
    public class Main
    {
        internal RobotManager RobotManager { get; private set; }
        internal PlayerManager PlayerManager { get; private set; }
        internal RandomGenerator Random { get; private set; }
        internal CommandManager CommandManager { get; private set; }
        internal ProjectileManager ProjectileManager { get; private set; }
        internal EffectManager EffectManager { get; private set; }
        internal BuffManager BuffManager { get; private set; }
        internal uint Frame { get; private set; }
        internal const uint FrameTime = 20;
        internal uint GameTime { get; private set; }
        internal uint IdGenerator { get; private set; }

        public Main(ulong seed)
        {
            RobotManager = new RobotManager(this);
            PlayerManager = new PlayerManager(this);
            Random = new RandomGenerator(seed);
            CommandManager = new CommandManager(this);
            ProjectileManager = new ProjectileManager(this);
            EffectManager = new EffectManager(this);
            BuffManager = new BuffManager(this);
        }

        internal uint GetId()
        {
            return ++IdGenerator;
        }
    }
}
