namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankMapTilesComponent : Entity, IAwake
    {
        public ListComponent<TankMapTile> Tiles { get; set; }
        public float TileWidth { get; set; }
        public float TileHeight { get; set; }
        public TankMapBound MapBound { get; set; }
    }
}