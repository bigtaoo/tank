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
        internal TileManager TileManager { get; private set; }
        internal ILogger Logger { get; private set; }
        internal uint Frame { get; private set; }
        internal const uint FrameTime = 20;
        internal uint GameTime { get; private set; }
        internal uint IdGenerator { get; private set; }

        public Main(ulong seed, ILogger logger)
        {
            Logger = logger;
            RobotManager = new RobotManager(this);
            PlayerManager = new PlayerManager(this);
            Random = new RandomGenerator(seed);
            CommandManager = new CommandManager(this);
            ProjectileManager = new ProjectileManager(this);
            EffectManager = new EffectManager(this);
            BuffManager = new BuffManager(this);
            TileManager = new TileManager(this);

            Logger.Warning($"New Logic with seed: {seed}");
        }
 
        public void Initialize(InitializeMapCommand initializeMap, InitializePlayerCommand initializePlayer)
        {
            initializeMap.Frame = 1;
            initializePlayer.Frame = 1;

            CommandManager.AddCommand(initializeMap);
            CommandManager.AddCommand(initializePlayer);
        }

        public void Update()
        {
            ++Frame;
            GameTime += FrameTime;

            CommandManager.UpdateCommands();
            PlayerManager.UpdatePlayers();
            RobotManager.UpdateRobots();
            ProjectileManager.UpdateProjectiles();
            BuffManager.UpdateBuffs();
            TileManager.UpdateTiles();
            EffectManager.UpdateEffects();
        }

        internal uint GetId()
        {
            return ++IdGenerator;
        }
    }
}
