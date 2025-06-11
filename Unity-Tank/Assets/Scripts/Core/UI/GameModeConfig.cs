using UnityEngine;

public class GameModeConfig : MonoBehaviour
{
    [SerializeField]
    private int mapCount = 1;
    public int MapCount => mapCount;
}