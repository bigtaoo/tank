using UnityEngine;
using UnityEngine.Tilemaps;

[ExecuteAlways]
public class TilemapDebugger : MonoBehaviour
{
    private Tilemap tilemap;

    private void OnDrawGizmos()
    {
#if UNITY_EDITOR
        if (tilemap == null)
            tilemap = GetComponent<Tilemap>();

        if (tilemap == null)
            return;

        // Iterate through all tiles in the tilemap
        foreach (var position in tilemap.cellBounds.allPositionsWithin)
        {
            // Skip empty tiles
            if (!tilemap.HasTile(position))
                continue;

            // Get world position of the tile
            Vector3 worldPosition = tilemap.GetCellCenterWorld(position);

            // Draw a cube or sphere at the tile's position for debugging
            Gizmos.color = Color.green;
            Gizmos.DrawSphere(worldPosition, 0.1f);

            // Optionally, draw the grid position as a label
            GUIStyle style = new GUIStyle();
            style.normal.textColor = Color.white;
            UnityEditor.Handles.Label(worldPosition, $"X {position.x + 100} Y {position.y + 100}", style);
        }
#endif
    }
}
