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
            var skillType = playerComponent.TankSkill.SkillType switch
            {
                TankSkillType.LifeSkill => SkillType.LifeSkill,
                TankSkillType.BombSkill => SkillType.BombSkill,
                TankSkillType.ShieldSkill => SkillType.ShieldSkill,
                TankSkillType.WallUpgradeSkill => SkillType.WallUpgradeSkill,
                TankSkillType.TankLevelUpSkill => SkillType.TankLevelUpSkill,
                TankSkillType.TimeStopSkill => SkillType.TimeStopSkill,
                _ => SkillType.None,  
            };
            var initialPlayerCommand = new InitializePlayerCommand((int)playerComponent.SpawnPosition.X * 1000, (int)playerComponent.SpawnPosition.Y * 1000,
                (int)playerComponent.MoveSpeed * 1000, (uint)playerComponent.ShootCoolDownTime, (int)playerComponent.BulletSpeed * 1000,
                skillType, (uint)playerComponent.TankSkill.SkillLevel);

            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            var initialRobotsCommand = new InitializeRobotsCommand();
            foreach(var robot in robotComponent.SpawnInfos)
            {
                initialRobotsCommand.AddRobotSpawnInfo(new RobotSpawnInfo(robot.SpawnPointId, (int)robot.SpawnPosition.X * 1000,
                    (int)robot.SpawnPosition.Y * 1000, robot.Rotation, robot.RobotCount, (uint)robot.SpawnInterval, (uint)robot.RobotLevel, 
                    (uint)robot.ShootInterval, robot.MoveSpeed, robot.BulletMoveSpeed));
            }

            var tankGameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            self.tankLogic = new Main(1000, tankGameInfoComponent.TankLogicUnityLogger);
            self.tankLogic.Initialize(initializeMapCommand, initialPlayerCommand, initialRobotsCommand);

            self.lastUpdatedTime = TimeInfo.Instance.ClientFrameTime();
        }
        
        [EntitySystem]
        private static void Update(this TankLogicComponent self)
        {
            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            if (gameInfoComponent.IsGamePause)
            {
                return;
            }
            var pastTime = TimeInfo.Instance.ClientFrameTime() - self.lastUpdatedTime;
            if (pastTime > 500)
            {
                self.lastUpdatedTime = TimeInfo.Instance.ClientFrameTime();
                return;
            }
            var logicUpdated = false;
            while (pastTime > Main.FrameTime)
            {
                pastTime -= Main.FrameTime;
                self.lastUpdatedTime += Main.FrameTime;

                self.tankLogic.Update();
                logicUpdated = true;
            }

            if (logicUpdated)
            {
               self.UpdateSCCommand();
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

        private static void UpdateSCCommand(this TankLogicComponent self)
        {
            var tankInfos = self.tankLogic.SCCommand.TankInfos;
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var robotComponent = self.Root().GetComponent<TankRobotComponent>();
            // Log.Warning($"client tank info: {self.tankLogic.SCCommand.TankInfos.Count}");
            foreach (var info in tankInfos)
            {
                if (info.PlayerIndex == 0)
                {
                    robotComponent.UpdateRobotInfo(info);
                }
                else
                {
                    playerComponent.UpdatePlayerTankInfo(info);
                }
            }
            robotComponent.RemoveDeadRobots(tankInfos);
            var remainingRobotInfo = self.tankLogic.SCCommand.GameInfo.RemainingRobotsCount;
            robotComponent.SetRemainingRobots(remainingRobotInfo[0], remainingRobotInfo[1], remainingRobotInfo[2]);
            playerComponent.SetPlayerLifes(self.tankLogic.SCCommand.GameInfo.PlayerLifes);

            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            bulletComponent.UpdateSCBulletInfo(self.tankLogic.SCCommand.BulletInfos);

            var tileMapComponent = self.Root().GetComponent<TankMapTilesComponent>();
            foreach(var tileMap in self.tankLogic.SCCommand.TileInfos)
            {
                var tileType = tileMap.TileType switch
                {
                    TileType.Wall => TankMapTileType.Wall,
                    TileType.Water => TankMapTileType.Water,
                    TileType.Steel => TankMapTileType.Steel,
                    TileType.Grass => TankMapTileType.Grass,
                    _ => TankMapTileType.None,  
                };
                tileMapComponent.SetTileType(tileMap.PosX, tileMap.PosY, tileType);
            }

            var itemComponent = self.Root().GetComponent<TankItemComponent>();
            itemComponent.UpdateSCItemInfo(self.tankLogic.SCCommand.ItemInfos);

            var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
            foreach (var effect in self.tankLogic.SCCommand.EffectInfos)
            {
                switch (effect.EffectType)
                {
                    case EffectType.BulletExplosion: self.CreateExplosionEffect(effect); break;
                    case EffectType.InvincibleShield: attachedEffectComponent.AddClientEffect(effect); break;
                    default: break;
                }
            }

            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            gameInfoComponent.SetGold(self.tankLogic.SCCommand.GameInfo.Gold);
            gameInfoComponent.IsGameEnd = self.tankLogic.SCCommand.GameInfo.GameResult != GameResultType.NotEnd;

            var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
            gameResultComponent.IsWin = self.tankLogic.SCCommand.GameInfo.GameResult == GameResultType.Win;
            
            self.tankLogic.SCCommand.ClearData();
        }

        private static void CreateExplosionEffect(this TankLogicComponent self, SCEffectInfo effect)
        {
            var position = new TankPosition()
            {
                X = effect.PosX / 1000.0f,
                Y = effect.PosY / 1000.0f,  
            };
            var rotation = 0;
            switch (effect.Direction)
            {
                case Direction.Up: position.Y += 1.0f; rotation = 0;  break;
                case Direction.Down: position.Y -= 1.0f; rotation = 180; break;
                case Direction.Left: position.X -= 1.0f; rotation = 90; break;
                case Direction.Right: position.X += 1.0f; rotation = 270; break;
                default: break;
            }
            // Log.Warning($"Explosion effect direction {effect.Direction}");

            var effectComponent = self.Root().GetComponent<TankEffectComponent>();
            effectComponent.ExplosionEffects.Add(new TankEffect
            {
                Position = position,
                Rotation = rotation,
                RemoveTime = TimeInfo.Instance.ClientFrameTime() + effect.Time,
            });
        }
    }
}