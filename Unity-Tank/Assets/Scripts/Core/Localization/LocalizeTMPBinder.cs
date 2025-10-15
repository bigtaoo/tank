using UnityEngine;
using TMPro;
using UnityEngine.Localization.Components;

[RequireComponent(typeof(TMP_Text))]
[RequireComponent(typeof(LocalizeStringEvent))]
public class LocalizeTMPBinder : MonoBehaviour
{
    void Reset() => Bind();
    void Start() => Bind();

    void Bind()
    {
        var tmp = GetComponent<TMP_Text>();
        var ev  = GetComponent<LocalizeStringEvent>();
        if (ev != null && tmp != null)
        {
            ev.OnUpdateString.RemoveAllListeners();
            ev.OnUpdateString.AddListener(tmp.SetText);
            ev.RefreshString();
        }
    }
}
