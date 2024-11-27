using UnityEngine.Tilemaps;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class TankClientTileMapComponent : Entity, IAwake
    {
        public Tilemap Tilemap;
    }
}