using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.Localization.Settings;

public class LocaleHelper : MonoBehaviour
{
    const string PrefKey = "language";

    void Awake() => StartCoroutine(Initialize());

    IEnumerator Initialize()
    {
        // Wait for Localization to be ready
        yield return LocalizationSettings.InitializationOperation;

        // Use saved choice if present, else derive from system language
        string code = PlayerPrefs.HasKey(PrefKey) ? PlayerPrefs.GetString(PrefKey) : SystemDefaultCode();
        yield return SetLocaleByCode(code);
    }

    public void SetEN() => StartCoroutine(SetLocaleByCode("en"));
    public void SetDE() => StartCoroutine(SetLocaleByCode("de"));
    public void SetZH() => StartCoroutine(SetLocaleByCode("zh"));

    IEnumerator SetLocaleByCode(string code)
    {
        yield return LocalizationSettings.InitializationOperation;

        var locales = LocalizationSettings.AvailableLocales.Locales;
        Locale target = locales.FirstOrDefault(l => Matches(l, code)) ?? locales.FirstOrDefault();

        if (target != null && LocalizationSettings.SelectedLocale != target)
        {
            LocalizationSettings.SelectedLocale = target;
        }

        PlayerPrefs.SetString(PrefKey, code);
        PlayerPrefs.Save();
    }

    static bool Matches(Locale locale, string code)
    {
        if (locale == null) return false;
        code = code.ToLowerInvariant();

        var idCode = locale.Identifier.Code.ToLowerInvariant();
        if (idCode == code || idCode.StartsWith(code)) return true;

        var ci = locale.Identifier.CultureInfo;
        return ci != null && ci.TwoLetterISOLanguageName.ToLowerInvariant() == code;
    }

    static string SystemDefaultCode()
    {
        switch (Application.systemLanguage)
        {
            case SystemLanguage.German: return "de";
            case SystemLanguage.Chinese:
            case SystemLanguage.ChineseSimplified:
            case SystemLanguage.ChineseTraditional: return "zh";
            default: return "en";
        }
    }
}