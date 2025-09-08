using System.Collections;
using System.Linq;
using ET;
using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.Localization.Settings;

public class LocaleHelper : MonoBehaviour
{
    const string PrefKey = "language";
    public static LocaleHelper Instance { get; private set; }

    void Awake()
    {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(gameObject); 
        } else {
            Destroy(gameObject);
        }

        StartCoroutine(Initialize());
    }

    IEnumerator Initialize()
    {
        // Wait for Localization to be ready
        yield return LocalizationSettings.InitializationOperation;

        // Use saved choice if present, else derive from system language
        string code = PlayerPrefs.HasKey(PrefKey) ? PlayerPrefs.GetString(PrefKey) : SystemDefaultCode();
        Log.Info($"locale: default locale is {code}");
        yield return SetLocaleByCode(code);
    }

    public void SetEN() => StartCoroutine(SetLocaleByCode("en"));
    public void SetDE() => StartCoroutine(SetLocaleByCode("de"));
    public void SetZH() => StartCoroutine(SetLocaleByCode("zh"));

    IEnumerator SetLocaleByCode(string code)
    {
        Log.Info($"locale: switching to {code}");
        yield return LocalizationSettings.InitializationOperation;

        var locales = LocalizationSettings.AvailableLocales.Locales;
        foreach (var locale in locales)
        {
            Log.Info($"locale: available locales include {locale}");
        }
        
        Locale target = locales.FirstOrDefault(l => Matches(l, code)) ?? locales.FirstOrDefault();
        Log.Info($"locale: target locale is {target}");

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