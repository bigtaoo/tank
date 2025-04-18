namespace ET
{
    [EntitySystemOf(typeof(TankBaseComponent))]
    [FriendOf(typeof(TankBaseComponent))]
    public static partial class TankBaseSystem
    {
        [EntitySystem]
        private static void Awake(this TankBaseComponent self)
        {
            self.BaseWallUpgradeEndTime = 0;
            self.BaseWalls = new ListComponent<TankPosition>
            {
                new() { X = 98, Y = 90 },
                new() { X = 98, Y = 91 },
                new() { X = 98, Y = 92 },
                new() { X = 99, Y = 92 },
                new() { X = 100, Y = 92 },
                new() { X = 101, Y = 92 },
                new() { X = 101, Y = 91 },
                new() { X = 101, Y = 90 },
            };
        }

        [EntitySystem]
        private static void Update(this TankBaseComponent self)
        {
            if (self.BaseWallUpgradeEndTime == 0)
            {
                return;
            }
            if (TimeInfo.Instance.ClientFrameTime() > self.BaseWallUpgradeEndTime)
            {
                self.BaseWallUpgradeEndTime = 0;
                var mapTileComponent = self.Root().GetComponent<TankMapTilesComponent>();
                foreach (var position in self.BaseWalls)
                {
                    mapTileComponent.TilesToUpdate.Add(new TankMapTile { Type = TankMapTileType.Wall, X = (int)position.X, Y = (int)position.Y });
                }
            }
        }

        public static void UpgradeBaseWalls(this TankBaseComponent self)
        {
            self.BaseWallUpgradeEndTime = TimeInfo.Instance.ClientFrameTime() + 3000;
            var mapTileComponent = self.Root().GetComponent<TankMapTilesComponent>();
            foreach (var position in self.BaseWalls)
            {
                mapTileComponent.TilesToUpdate.Add(new TankMapTile { Type = TankMapTileType.Steel, X = (int)position.X, Y = (int)position.Y });
            }
        }
    }
}