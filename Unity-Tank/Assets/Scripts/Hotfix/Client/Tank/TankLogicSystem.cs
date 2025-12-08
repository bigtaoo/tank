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
        }
        
        [EntitySystem]
        private static void Update(this TankLogicComponent self)
        {

        }
    }
}