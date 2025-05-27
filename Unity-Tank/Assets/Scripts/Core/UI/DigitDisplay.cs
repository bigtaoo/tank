using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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

    private List<GameObject> activeDigits = new List<GameObject>();
    private bool isUpdating = false; // prevent re-entrant calls

    private void OnEnable()
    {
#if UNITY_EDITOR
        if (!Application.isPlaying && updateInEditor)
            EditorSafeDisplay();
#endif
    }

    private void OnValidate()
    {
#if UNITY_EDITOR
        if (!Application.isPlaying && updateInEditor)
        {
            UnityEditor.EditorApplication.delayCall += () =>
            {
                if (this != null) // object might be destroyed
                    EditorSafeDisplay();
            };
        }
#endif
    }

    private void EditorSafeDisplay()
    {
#if UNITY_EDITOR
        if (isUpdating) return; // prevent infinite loops
        isUpdating = true;
        DisplayNumber(previewNumber);
        isUpdating = false;
#endif
    }

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

            GameObject digitObj = CreateDigitObjectEditorSafe();
            if (digitObj == null) continue;
            RectTransform rt = digitObj.GetComponent<RectTransform>();
            rt.SetParent(transform, false);
            rt.anchoredPosition = new Vector2(startX + i * digitSpacing, 0);

            Image img = digitObj.GetComponent<Image>();
            img.sprite = digitSprites[digit];
            img.enabled = true;

            activeDigits.Add(digitObj);
        }
    }

    private GameObject CreateDigitObjectEditorSafe()
    {
#if UNITY_EDITOR
        if (digitImagePrefab == null)
        {
            Debug.LogWarning("DigitDisplay: digitImagePrefab is not assigned.");
            return null;
        }

        GameObject newObj;

        if (Application.isPlaying)
        {
            newObj = Instantiate(digitImagePrefab);
        }
        else
        {
            newObj = UnityEditor.PrefabUtility.InstantiatePrefab(digitImagePrefab) as GameObject;
            if (newObj != null)
            {
                newObj.transform.SetParent(transform, false);
            }
            else
            {
                Debug.LogWarning("DigitDisplay: Failed to instantiate digitImagePrefab in Editor.");
            }
        }

        return newObj;
#else
    return Instantiate(digitImagePrefab);
#endif
    }

    private void ClearDigits()
    {
#if UNITY_EDITOR
        foreach (GameObject obj in activeDigits)
        {
            if (Application.isPlaying)
                obj.SetActive(false);
            else
                DestroyImmediate(obj);
        }
#else
        foreach (GameObject obj in activeDigits)
            obj.SetActive(false);
#endif
        activeDigits.Clear();
    }
}
