namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankMapTilesComponent : Entity, IAwake
    {
        public ListComponent<TankMapTile> tiles;
        public float tileSizeX;
        public float tileSizeY;
    }
}