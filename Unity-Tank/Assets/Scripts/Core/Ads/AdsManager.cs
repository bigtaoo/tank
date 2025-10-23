using System;
using UnityEngine;
// using Unity.LevelPlay;

public class AdsManager : MonoBehaviour
{
    public static AdsManager Instance { get; private set; }

    [Header("Unity Mediation Ad Unit IDs")]
    [SerializeField] private string androidGameId = "YOUR_ANDROID_GAME_ID";
    [SerializeField] private string iosGameId = "YOUR_IOS_GAME_ID";
    [SerializeField] private string rewardedAdUnitId = "Rewarded_Android"; // Set these in Dashboard
    [SerializeField] private string interstitialAdUnitId = "Interstitial_Android";

    // private IRewardedAd rewardedAd;
    // private IInterstitialAd interstitialAd;

    private float sessionStartTime;
    private bool rewardedReady = false;
    private bool interstitialReady = false;

    private Action onRewardEarned;

    private async void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        // await UnityServices.InitializeAsync();
        InitializeAds();
    }

    private void InitializeAds()
    {
#if UNITY_ANDROID
        string gameId = androidGameId;
#elif UNITY_IOS
        string gameId = iosGameId;
#else
        Debug.Log("Ads not supported on this platform.");
        return;
#endif

        Debug.Log($"Unity Mediation Initialized with Game ID: {gameId}");

        // rewardedAd = MediationService.Instance.CreateRewardedAd(rewardedAdUnitId);
        // interstitialAd = MediationService.Instance.CreateInterstitialAd(interstitialAdUnitId);

        // RegisterRewardedEvents();
        // RegisterInterstitialEvents();

        // rewardedAd.LoadAsync();
        // interstitialAd.LoadAsync();

        sessionStartTime = Time.time;
    }

//     // ---------------- Rewarded ----------------
//     private void RegisterRewardedEvents()
//     {
//         rewardedAd.OnLoaded += () => rewardedReady = true;
//         rewardedAd.OnFailedLoad += (error, msg) =>
//         {
//             rewardedReady = false;
//             Debug.Log($"Rewarded load failed: {msg}");
//         };

//         rewardedAd.OnShowed += () => Debug.Log("Rewarded ad shown");
//         rewardedAd.OnClosed += (args) =>
//         {
//             if (args.AdShowCompletionState == AdShowCompletionState.COMPLETED)
//             {
//                 Debug.Log("Rewarded ad completed!");
//                 onRewardEarned?.Invoke();
//             }
//             rewardedAd.LoadAsync();
//         };
//     }

//     public bool IsRewardedReady() => rewardedReady;

//     public async void ShowRewardedAd(Action onRewarded = null)
//     {
// #if UNITY_WEBGL
//         Debug.Log("Simulating rewarded ad (WebGL).");
//         onRewarded?.Invoke();
// #else
//         if (rewardedReady)
//         {
//             onRewardEarned = onRewarded;
//             await rewardedAd.ShowAsync();
//         }
//         else
//         {
//             Debug.Log("Rewarded ad not ready.");
//             await rewardedAd.LoadAsync();
//         }
// #endif
//     }

//     // ---------------- Interstitial ----------------
//     private void RegisterInterstitialEvents()
//     {
//         interstitialAd.OnLoaded += () => interstitialReady = true;
//         interstitialAd.OnClosed += () =>
//         {
//             Debug.Log("Interstitial closed, reloading...");
//             interstitialAd.LoadAsync();
//         };
//         interstitialAd.OnFailedLoad += (error, msg) =>
//         {
//             interstitialReady = false;
//             Debug.Log($"Interstitial load failed: {msg}");
//         };
//     }

//     public bool ShouldShowInterstitial()
//     {
//         return Time.time - sessionStartTime >= 600f; // 10 minutes
//     }

//     public async void ShowInterstitial()
//     {
// #if UNITY_WEBGL
//         Debug.Log("Simulating interstitial (WebGL).");
// #else
//         if (interstitialReady)
//         {
//             await interstitialAd.ShowAsync();
//         }
//         else
//         {
//             Debug.Log("Interstitial not ready, reloading...");
//             await interstitialAd.LoadAsync();
//         }
// #endif
//         sessionStartTime = Time.time;
//     }
}
