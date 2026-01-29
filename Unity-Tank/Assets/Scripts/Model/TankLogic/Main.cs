namespace TankLogic
{
    public class Main
    {
        internal RobotManager RobotManager { get; private set; }
        internal PlayerManager PlayerManager { get; private set; }
        internal RandomGenerator Random { get; private set; }
        internal CommandManager CommandManager { get; private set; }
        internal BulletManager BulletManager { get; private set; }
        internal EffectManager EffectManager { get; private set; }
        internal BuffManager BuffManager { get; private set; }
        internal TileManager TileManager { get; private set; }
        internal ItemManager ItemManager { get; private set; }
        internal SkillManager SkillManager { get; private set; }
        internal Headquarter Headquarter { get; private set; }
        internal ILogger Logger { get; private set; }
        internal uint Frame { get; private set; }
        public const uint FrameTime = 20;
        internal uint GameTime { get; private set; }
        internal uint IdGenerator { get; private set; }
        internal bool IsGameOver { get; private set; }
        internal int Gold { get; private set; }
        public SCCommand SCCommand { get; set; } = new();

        public Main(ulong seed, ILogger logger)
        {
            Logger = logger;
            RobotManager = new RobotManager(this);
            PlayerManager = new PlayerManager(this);
            Random = new RandomGenerator(seed);
            CommandManager = new CommandManager(this);
            BulletManager = new BulletManager(this);
            EffectManager = new EffectManager(this);
            BuffManager = new BuffManager(this);
            TileManager = new TileManager(this);
            ItemManager = new ItemManager(this);
            SkillManager = new SkillManager(this);
            Headquarter = new Headquarter(this);

            Logger.Warning($"New Logic with seed: {seed}");
        }
 
        public void Initialize(InitializeMapCommand initializeMap, InitializePlayerCommand initializePlayer, InitializeRobotsCommand robotsCommand)
        {
            initializeMap.Frame = 1;
            initializePlayer.Frame = 1;
            robotsCommand.Frame = 1;
            IsGameOver = false;

            CommandManager.AddCommand(initializeMap);
            CommandManager.AddCommand(initializePlayer);
            CommandManager.AddCommand(robotsCommand);
        }

        public void Update()
        {
            if (IsGameOver)
            {
                return;
            }
            ++Frame;
            GameTime += FrameTime;

            CommandManager.UpdateCommands();
            PlayerManager.UpdatePlayers();
            RobotManager.UpdateRobots();
            BulletManager.UpdateProjectiles();
            BuffManager.UpdateBuffs();
            TileManager.UpdateTiles();
            EffectManager.UpdateEffects();
            ItemManager.UpdateItems();
            SkillManager.UpdateSkill();

            UpdateSCCommand();
        }

        public void AddCommand(Command command)
        {
            if (IsGameOver)
            {
                return;
            }
            command.Frame = Frame + 1;
            CommandManager.AddCommand(command);
        }

        internal uint GetId()
        {
            return ++IdGenerator;
        }

        internal void SetGameOver()
        {
            IsGameOver = true;
        }

        internal void AddGold()
        {
            Gold++;
        }

        private void UpdateSCCommand()
        {
            foreach (var player in PlayerManager.Players)
            {
                SCTankInfo tankInfo = new()
                {
                    Id = player.PlayerId,
                    PlayerIndex = 1,
                    PosX = player.PlayerData.CurrentPosition.X,
                    PosY = player.PlayerData.CurrentPosition.Y,
                    Direction = player.PlayerData.CurrentDirection,
                    Level = player.PlayerData.Level,
                };
                SCCommand.TankInfos.Add(tankInfo);

                SCCommand.GameInfo.PlayerLifes = player.PlayerData.PlayerLifes;
            }
            foreach (var robot in RobotManager.Robots.Values)
            {
                SCTankInfo tankInfo = new()
                {
                    Id = robot.RobotId,
                    PlayerIndex = 0,
                    PosX = robot.RobotData.CurrentPosition.X,
                    PosY = robot.RobotData.CurrentPosition.Y,
                    Direction = robot.RobotData.MoveDirection,
                    Level = robot.RobotData.Level,
                };
                SCCommand.TankInfos.Add(tankInfo);
            }
            for (int i = 0; i < 3; ++i)
            {
                SCCommand.GameInfo.RemainingRobotsCount[i] = RobotManager.RemainingRobotsCount[i];
            }
            foreach (var bullet in BulletManager.GetBullets())
            {
                SCBulletInfo bulletInfo = new()
                {
                    Id = bullet.BulletId,
                    PosX = bullet.BulletData.Position.X,
                    PosY = bullet.BulletData.Position.Y,
                };
                SCCommand.BulletInfos.Add(bulletInfo);
            }
            foreach (var item in ItemManager.Items.Values)
            {
                SCItemInfo itemInfo = new()
                {
                    ItemId = item.ItemId,
                    X = item.ItemData.Position.X,
                    Y = item.ItemData.Position.Y,
                    ItemType = item.ItemData.ItemType,
                };
                SCCommand.ItemInfos.Add(itemInfo);
            }
            foreach (var tile in TileManager.UpdatedTiles)
            {
                SCTileInfo tileInfo = new()
                {
                    PosX = tile.Position.X,
                    PosY = tile.Position.Y,
                    TileType = tile.TileType,
                };
                SCCommand.TileInfos.Add(tileInfo);
            }
            TileManager.UpdatedTiles.Clear();
            foreach (var effect in EffectManager.ClientEffects)
            {
                SCEffectInfo effectInfo = new()
                {
                    Id = effect.EffectId,
                    PosX = effect.Position.X,
                    PosY = effect.Position.Y,
                    EffectType = effect.EffectType,
                    Time = effect.Time,
                    OwnerId = effect.OwnerId,
                    Direction = effect.Direction,
                };
                SCCommand.EffectInfos.Add(effectInfo);
            }
            EffectManager.ClientEffects.Clear();         

            SCCommand.GameInfo.IsGameEnd = IsGameOver;
            SCCommand.GameInfo.Gold = Gold;

            // Log.Warning($"tank infos: {SCCommand.TankInfos.Count}");
        }
    }
}
