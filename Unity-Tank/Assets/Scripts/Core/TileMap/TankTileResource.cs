using UnityEngine;

public class TankTileResource : MonoBehaviour
{
    public static TankTileResource Instance { get; private set; }

    void Awake()
    {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(gameObject); 
        } else {
            Destroy(gameObject);
        }
    }

    public TankTile GetTileResource(TankMapTileType tileType)
    {
        return tileType switch
        {
            TankMapTileType.None => null,
            TankMapTileType.Grass => grassTile,
            TankMapTileType.Steel => steelTile,
            TankMapTileType.Wall => wallTile,
            TankMapTileType.Water => waterTile,
            _ => null
        };
    }

    [Header("Tank Tile Assets")]
    [SerializeField] private TankTile wallTile;
    [SerializeField] private TankTile waterTile;
    [SerializeField] private TankTile steelTile;
    [SerializeField] private TankTile grassTile;
}