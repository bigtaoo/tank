namespace ET
{
    [EntitySystemOf(typeof(TankBaseComponent))]
    [FriendOf(typeof(TankBaseComponent))]
    public static partial class TankBaseSystem
    {
        [EntitySystem]
        private static void Awake(this TankBaseComponent self)
        {
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

        public static void UpgradeBaseWalls(this TankBaseComponent self)
        {
            var mapTileComponent = self.Root().GetComponent<TankMapTilesComponent>();
            foreach(var position in self.BaseWalls)
            {
                mapTileComponent.TilesToUpdate.Add(new TankMapTile { Type = TankMapTileType.Steel, X = (int)position.X, Y = (int)position.Y });
            }
        }
    }
}