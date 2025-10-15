using UnityEngine;
using UnityEngine.Localization.Components;
using UnityEngine.Localization.SmartFormat.PersistentVariables;

public class TankSkillTimeUpdater: MonoBehaviour
{
    public static TankSkillTimeUpdater Instance { get; private set; }
    private LocalizeStringEvent stringEvent;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        Initialize();
    }

    void Initialize()
    {
        stringEvent = GetComponent<LocalizeStringEvent>();

        var localizedString = stringEvent.StringReference;
        localizedString.Add("time", new IntVariable { Value = 130 });
        localizedString.RefreshString();
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