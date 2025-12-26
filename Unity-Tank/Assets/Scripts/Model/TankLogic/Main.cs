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
        public const uint FrameTime = 20;
        internal uint GameTime { get; private set; }
        internal uint IdGenerator { get; private set; }
        public SCCommand SCCommand { get; set; } = new();

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
 
        public void Initialize(InitializeMapCommand initializeMap, InitializePlayerCommand initializePlayer, InitializeRobotsCommand robotsCommand)
        {
            initializeMap.Frame = 1;
            initializePlayer.Frame = 1;
            robotsCommand.Frame = 1;

            CommandManager.AddCommand(initializeMap);
            CommandManager.AddCommand(initializePlayer);
            CommandManager.AddCommand(robotsCommand);
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

            UpdateSCCommand();
        }

        public void AddCommand(Command command)
        {
            command.Frame = Frame + 1;
            CommandManager.AddCommand(command);
        }

        internal uint GetId()
        {
            return ++IdGenerator;
        }

        private void UpdateSCCommand()
        {
            foreach (var player in PlayerManager.Players)
            {
                SCTankInfo tankInfo = new()
                {
                    Id = player.PlayerId,
                    PosX = player.PlayerData.CurrentPosition.X,
                    PosY = player.PlayerData.CurrentPosition.Y,
                    Direction = player.PlayerData.CurrentDirection,
                };
                SCCommand.TankInfos.Add(tankInfo);
            }
        }
    }
}
