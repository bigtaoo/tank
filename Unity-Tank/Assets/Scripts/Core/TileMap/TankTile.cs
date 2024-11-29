using UnityEngine;
using UnityEngine.Tilemaps;

[CreateAssetMenu(fileName = "TankTile", menuName = "2D/Tiles/TankTile", order = 1)]

public class TankTile : Tile
{
    public TankMapTileType TileType;

    //public override void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
    //{
    //    base.GetTileData(position, tilemap, ref tileData);
    //    // Customize tile data if needed, e.g., change sprite dynamically
    //}
}
