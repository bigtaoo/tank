using TankLogic;

namespace ET
{
    [EntitySystemOf(typeof(TankLogicComponent))]
    [FriendOf(typeof(TankLogicComponent))]
    public static partial class TankLogicSystem
    {
        [EntitySystem]
        private static void Awake(this TankLogicComponent self)
        {
            var tileMapComponent = self.Root().GetComponent<TankMapTilesComponent>();
            var initializeMapCommand = new InitializeMapCommand((uint)tileMapComponent.TileWidth, (uint)tileMapComponent.TileHeight);
            initializeMapCommand.SetMapBound((int)tileMapComponent.MapBound.Top, (int)tileMapComponent.MapBound.Bottom, 
            (int)tileMapComponent.MapBound.Left, (int)tileMapComponent.MapBound.Right);
            foreach (var tile in tileMapComponent.Tiles)
            {
                initializeMapCommand.AddTileInfo(new TileInfo(CommandHelper.GetTileType(tile.Type), tile.X, tile.Y));
            }

            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var initialPlayerCommand = new InitializePlayerCommand((int)playerComponent.SpawnPosition.X, (int)playerComponent.SpawnPosition.Y,
                (int)playerComponent.MoveSpeed, (uint)playerComponent.ShootCoolDownTime, (int)playerComponent.BulletSpeed);

            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            var initialRobotsCommand = new InitializeRobotsCommand();
            foreach(var robot in robotComponent.SpawnInfos)
            {
                initialRobotsCommand.AddRobotSpawnInfo(new RobotSpawnInfo(robot.SpawnPointId, (int)robot.SpawnPosition.X, (int)robot.SpawnPosition.Y,
                    robot.Rotation, robot.RobotCount, (uint)robot.SpawnInterval, robot.RobotLevel, (uint)robot.ShootInterval, 
                    robot.MoveSpeed, robot.BulletMoveSpeed));
            }

            var tankGameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            self.tankLogic = new Main(1000, tankGameInfoComponent.TankLogicUnityLogger);
            self.tankLogic.Initialize(initializeMapCommand, initialPlayerCommand, initialRobotsCommand);

            self.lastUpdatedTime = TimeInfo.Instance.ClientFrameTime();
        }
        
        [EntitySystem]
        private static void Update(this TankLogicComponent self)
        {
            var pastTime = TimeInfo.Instance.ClientFrameTime() - self.lastUpdatedTime;
            while (pastTime > Main.FrameTime)
            {
                pastTime -= Main.FrameTime;
                self.lastUpdatedTime += Main.FrameTime;

                self.tankLogic.Update();
            }
        }

        public static void SendMoveCommand(this TankLogicComponent self, TankDirection direction)
        {
            var dir = direction switch
            {
                TankDirection.Left => Direction.Left,
                TankDirection.Right => Direction.Right,
                TankDirection.Up => Direction.Up,
                TankDirection.Down => Direction.Down,
                _ => Direction.None,
            };
            var moveCommand = new MoveCommand(dir);
            self.tankLogic.AddCommand(moveCommand);
        }

        public static void SendShootCommand(this TankLogicComponent self)
        {
            var shootCommand = new ShootCommand();
            self.tankLogic.AddCommand(shootCommand);
        }
    }
}