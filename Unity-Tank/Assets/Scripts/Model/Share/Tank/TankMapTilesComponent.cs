namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankMapTilesComponent : Entity, IAwake
    {
        public ListComponent<TankMapTile> Tiles;
        public float TileWidth;
        public float TileHeight;
    }
}