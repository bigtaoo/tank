using UnityEngine;
using UnityEngine.Tilemaps;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankClientTileMapComponent))]
    [FriendOf(typeof(TankClientTileMapComponent))]
    public static partial class TankClientTileMapSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientTileMapComponent self)
        {
            var tileMap = GameObject.FindFirstObjectByType<Tilemap>();
            if (tileMap == null)
            {
                Log.Error("No tile map can be found!!!");
            }
            self.Tilemap = tileMap;
        }
    }
}