using UnityEngine;
using UnityEngine.U2D;

public class AtlasManager : MonoBehaviour
{
    public SpriteAtlas ItemAtlas;

    public static AtlasManager Instance { get; private set; }

    void Awake() {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(gameObject); 
        } else {
            Destroy(gameObject);
        }
    }

    public Sprite GetSprite(string name) {
        return ItemAtlas.GetSprite(name);
    }
}