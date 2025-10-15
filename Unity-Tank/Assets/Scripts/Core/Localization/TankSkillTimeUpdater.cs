using ET;
using UnityEngine;
using UnityEngine.Localization.Components;
using UnityEngine.Localization.SmartFormat.PersistentVariables;

[RequireComponent(typeof(LocalizeStringEvent))]
public class TankSkillTimeUpdater : MonoBehaviour
{
    private LocalizeStringEvent stringEvent;

    void Awake()
    {
        stringEvent = GetComponent<LocalizeStringEvent>();

        var localizedString = stringEvent.StringReference;
        localizedString.Add("time", new IntVariable { Value = 130 });
        // Log.Info($"Skill time updater: {localizedString.GetLocalizedString()}");
    }

    public void UpdateSkillTime(int timeInSeconds)
    {
        var localizedString = stringEvent.StringReference;
        if (localizedString.TryGetValue("time", out var variable) && variable is IntVariable intVariable)
        {
            intVariable.Value = timeInSeconds;
            localizedString.RefreshString();
        }
    }
}