using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

#if UNITY_EDITOR
using UnityEditor;
// using UnityEditor.SceneManagement; // not needed for this fix
#endif

[ExecuteAlways]
public class DigitDisplay : MonoBehaviour
{
    public enum Alignment { Left, Center, Right }

    [Header("Sprites & Prefab")]
    public Sprite[] digitSprites;
    public GameObject digitImagePrefab;

    [Header("Layout")]
    public float digitSpacing = 32f;
    public Alignment alignment = Alignment.Center;

    [Header("Formatting")]
    public bool showLeadingZeros = false;
    public int fixedDigitCount = 0;

    [Header("Preview (Editor Only)")]
    public int previewNumber = 0;
    public bool updateInEditor = true;

    [Header("Appearance")]
    public Color digitColor = Color.white;

    private readonly List<GameObject> digits = new();
    private bool isUpdating = false;

#if UNITY_EDITOR
    // NEW: only operate in a scene, not on prefab assets
    private bool IsInSceneContext()
    {
        if (Application.isPlaying) return true;
        if (!gameObject.scene.IsValid()) return false; // not in a scene
        if (PrefabUtility.IsPartOfPrefabAsset(gameObject)) return false; // this is a prefab asset
        return true;
    }
#endif

    private void OnEnable()
    {
#if UNITY_EDITOR
        if (!Application.isPlaying && updateInEditor && !isUpdating && IsInSceneContext())
        {
            EditorSafeDisplay();
        }
#endif
    }

    private void OnValidate()
    {
#if UNITY_EDITOR
        if (!Application.isPlaying && updateInEditor)
        {
            EditorApplication.delayCall += () =>
            {
                if (this != null && IsInSceneContext())
                    EditorSafeDisplay();
            };
        }
#endif
    }

#if UNITY_EDITOR
    private void EditorSafeDisplay()
    {
        if (isUpdating || !IsInSceneContext() ||
            digitSprites == null || digitSprites.Length < 10 || digitImagePrefab == null)
            return;

        isUpdating = true;
        DisplayNumber(previewNumber);
        isUpdating = false;
    }
#endif

    public void DisplayNumber(int number)
    {
        if (digitSprites == null || digitSprites.Length < 10 || digitImagePrefab == null)
            return;

        ClearDigits();

        string numberStr = showLeadingZeros && fixedDigitCount > 0
            ? number.ToString($"D{fixedDigitCount}")
            : number.ToString();

        float totalWidth = numberStr.Length * digitSpacing;
        float startX = alignment switch
        {
            Alignment.Left => 0f,
            Alignment.Center => -totalWidth / 2f + digitSpacing / 2f,
            Alignment.Right => -totalWidth + digitSpacing,
            _ => 0f
        };

        for (int i = 0; i < numberStr.Length; i++)
        {
            int digit = numberStr[i] - '0';
            if (digit < 0 || digit > 9) continue;

            GameObject digitObj = CreateDigitObject();
            if (digitObj == null) continue;

            RectTransform rt = digitObj.GetComponent<RectTransform>();
            rt.anchoredPosition = new Vector2(startX + i * digitSpacing, 0);

            Image img = digitObj.GetComponent<Image>();
            img.sprite = digitSprites[digit];
            img.color = digitColor;
            img.enabled = true;

            digitObj.SetActive(true);
        }
    }

    private GameObject CreateDigitObject()
    {
        if (Application.isPlaying)
        {
            GameObject obj = digits.FirstOrDefault(go => !go.activeSelf);
            if (obj == null)
            {
                obj = Instantiate(digitImagePrefab, transform);
                digits.Add(obj);
            }
            obj.transform.SetParent(transform, false);
            return obj;
        }

#if UNITY_EDITOR
        // NEW: Don’t parent directly during instantiation; spawn into the scene, then SetParent.
        if (!IsInSceneContext()) return null;

        var spawned = PrefabUtility.InstantiatePrefab(digitImagePrefab, gameObject.scene) as GameObject;
        if (spawned == null)
        {
            Debug.LogWarning("DigitDisplay: Failed to instantiate digitImagePrefab in Editor.");
            return null;
        }
        var tr = spawned.transform as RectTransform;
        tr.SetParent(transform, false);
        return spawned;
#else
        return Instantiate(digitImagePrefab, transform);
#endif
    }

    private void ClearDigits()
    {
#if UNITY_EDITOR
        if (!Application.isPlaying)
        {
            if (!IsInSceneContext()) return; // NEW: don’t edit prefab assets

            for (int i = transform.childCount - 1; i >= 0; i--)
            {
                GameObject child = transform.GetChild(i).gameObject;
                Undo.DestroyObjectImmediate(child);
            }
            return;
        }
#endif
        var images = transform.GetComponentsInChildren<Image>(true);
        digits.Clear();
        foreach (Image image in images)
        {
            digits.Add(image.gameObject);
        }
        foreach (GameObject obj in digits)
        {
            obj.SetActive(false);
        }
    }
}
