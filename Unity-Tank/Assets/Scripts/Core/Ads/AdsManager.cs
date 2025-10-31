using System;
using UnityEngine;
using Unity.Services.LevelPlay;
using ET;

public class AdsManager : MonoBehaviour
{
    public static AdsManager Instance { get; private set; }

    [Header("Unity Mediation Ad Unit IDs")]
    [SerializeField] private string androidAppKey = "YOUR_ANDROID_GAME_ID";
    [SerializeField] private string androidRewardedAdUnitId = "Rewarded_Android";
    [SerializeField] private string androidInterstitialAdUnitId = "Interstitial_Android";
    [SerializeField] private string androidBannerAdUnitId = "Interstitial_Android";
    [SerializeField] private string iosAppKey = "23f1d6f7d";
    [SerializeField] private string iosRewardedAdUnitId = "vf2pji27xx20xw24";
    [SerializeField] private string iosInterstitialAdUnitId = "inebg4mascv7xxvl";
    [SerializeField] private string iosBannerAdUnitId = "64p98f1vycpif4rm";

    private LevelPlayBannerAd bannerAd;
    private LevelPlayInterstitialAd interstitialAd;
    private LevelPlayRewardedAd rewardedVideoAd;

    private Action onRewardEarned;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        Log.Info("[AdsManager] LevelPlay.ValidateIntegration");

        LevelPlay.ValidateIntegration();

        Log.Info($"[AdsManager] Unity version {LevelPlay.UnityVersion}");

        Log.Info("[AdsManager] Register initialization callbacks");
        LevelPlay.OnInitSuccess += SdkInitializationCompletedEvent;
        LevelPlay.OnInitFailed += SdkInitializationFailedEvent;

        // SDK init
        string appKey = androidAppKey;
#if UNITY_ANDROIOD
        appKey = androidAppKey;
#elif UNITY_IOS
        appKey = iosAppKey;
#else
        Log.Warning("Ads not supported on this platform.");
#endif
        Log.Info("[AdsManager] LevelPlay SDK initialization");
        LevelPlay.Init(appKey);
    }

    void EnableAds()
    {
        // Register to ImpressionDataReadyEvent
        LevelPlay.OnImpressionDataReady += ImpressionDataReadyEvent;

        // Create Rewarded Video object
        string rewardedVideoAdUnitId = androidRewardedAdUnitId;
#if UNITY_ANDROIOD
        rewardedVideoAdUnitId = androidRewardedAdUnitId;
#elif UNITY_IOS
        rewardedVideoAdUnitId = iosRewardedAdUnitId;
#else
        Log.Warning("Ads not supported on this platform.");
#endif
        rewardedVideoAd = new LevelPlayRewardedAd(rewardedVideoAdUnitId);

        // Register to Rewarded Video events
        rewardedVideoAd.OnAdLoaded += RewardedVideoOnLoadedEvent;
        rewardedVideoAd.OnAdLoadFailed += RewardedVideoOnAdLoadFailedEvent;
        rewardedVideoAd.OnAdDisplayed += RewardedVideoOnAdDisplayedEvent;
        rewardedVideoAd.OnAdDisplayFailed += RewardedVideoOnAdDisplayedFailedEvent;
        rewardedVideoAd.OnAdRewarded += RewardedVideoOnAdRewardedEvent;
        rewardedVideoAd.OnAdClicked += RewardedVideoOnAdClickedEvent;
        rewardedVideoAd.OnAdClosed += RewardedVideoOnAdClosedEvent;
        rewardedVideoAd.OnAdInfoChanged += RewardedVideoOnAdInfoChangedEvent;

        // Create Banner object
        string bannerAdUnitId = androidBannerAdUnitId;
#if UNITY_ANDROIOD
        bannerAdUnitId = androidBannerAdUnitId;
#elif UNITY_IOS
        bannerAdUnitId = iosBannerAdUnitId;
#else
        Log.Warning("Ads not supported on this platform.");
#endif
        bannerAd = new LevelPlayBannerAd(bannerAdUnitId);

        // Register to Banner events
        bannerAd.OnAdLoaded += BannerOnAdLoadedEvent;
        bannerAd.OnAdLoadFailed += BannerOnAdLoadFailedEvent;
        bannerAd.OnAdDisplayed += BannerOnAdDisplayedEvent;
        bannerAd.OnAdDisplayFailed += BannerOnAdDisplayFailedEvent;
        bannerAd.OnAdClicked += BannerOnAdClickedEvent;
        bannerAd.OnAdCollapsed += BannerOnAdCollapsedEvent;
        bannerAd.OnAdLeftApplication += BannerOnAdLeftApplicationEvent;
        bannerAd.OnAdExpanded += BannerOnAdExpandedEvent;

        // Create Interstitial object
        string interstitalAdUnitId = androidInterstitialAdUnitId;
#if UNITY_ANDROIOD
        interstitalAdUnitId = androidInterstitialAdUnitId;
#elif UNITY_IOS
        interstitalAdUnitId = iosInterstitialAdUnitId;
#else   
        Log.Warning("Ads not supported on this platform.");
#endif
        interstitialAd = new LevelPlayInterstitialAd(interstitalAdUnitId);

        // Register to Interstitial events
        interstitialAd.OnAdLoaded += InterstitialOnAdLoadedEvent;
        interstitialAd.OnAdLoadFailed += InterstitialOnAdLoadFailedEvent;
        interstitialAd.OnAdDisplayed += InterstitialOnAdDisplayedEvent;
        interstitialAd.OnAdDisplayFailed += InterstitialOnAdDisplayFailedEvent;
        interstitialAd.OnAdClicked += InterstitialOnAdClickedEvent;
        interstitialAd.OnAdClosed += InterstitialOnAdClosedEvent;
        interstitialAd.OnAdInfoChanged += InterstitialOnAdInfoChangedEvent;
    }

    void SdkInitializationCompletedEvent(LevelPlayConfiguration config)
    {
        Log.Info($"[AdsManager] Received SdkInitializationCompletedEvent with Config: {config}");
        EnableAds();
    }

    void SdkInitializationFailedEvent(LevelPlayInitError error)
    {
        Log.Info($"[AdsManager] Received SdkInitializationFailedEvent with Error: {error}");
    }

    void RewardedVideoOnLoadedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnLoadedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdLoadFailedEvent(LevelPlayAdError error)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdLoadFailedEvent With Error: {error}");
    }

    void RewardedVideoOnAdDisplayedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdDisplayedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdDisplayedFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdDisplayedFailedEvent With AdInfo: {adInfo} and Error: {error}");
    }

    void RewardedVideoOnAdRewardedEvent(LevelPlayAdInfo adInfo, LevelPlayReward reward)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdRewardedEvent With AdInfo: {adInfo} and Reward: {reward}");
    }

    void RewardedVideoOnAdClickedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdClickedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdClosedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdClosedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdInfoChangedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received RewardedVideoOnAdInfoChangedEvent With AdInfo {adInfo}");
    }

    void InterstitialOnAdLoadedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdLoadedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdLoadFailedEvent(LevelPlayAdError error)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdLoadFailedEvent With Error: {error}");
    }

    void InterstitialOnAdDisplayedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdDisplayedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdDisplayFailedEvent With AdInfo: {adInfo} and Error: {error}");
    }

    void InterstitialOnAdClickedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdClickedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdClosedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdClosedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdInfoChangedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received InterstitialOnAdInfoChangedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdLoadedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received BannerOnAdLoadedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdLoadFailedEvent(LevelPlayAdError error)
    {
        Log.Info($"[AdsManager] Received BannerOnAdLoadFailedEvent With Error: {error}");
    }

    void BannerOnAdClickedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received BannerOnAdClickedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdDisplayedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received BannerOnAdDisplayedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error)
    {
        Log.Info($"[AdsManager] Received BannerOnAdDisplayFailedEvent With AdInfo: {adInfo} and Error: {error}");
    }

    void BannerOnAdCollapsedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received BannerOnAdCollapsedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdLeftApplicationEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received BannerOnAdLeftApplicationEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdExpandedEvent(LevelPlayAdInfo adInfo)
    {
        Log.Info($"[AdsManager] Received BannerOnAdExpandedEvent With AdInfo: {adInfo}");
    }

    void ImpressionDataReadyEvent(LevelPlayImpressionData impressionData)
    {
        Log.Info($"[AdsManager] Received ImpressionDataReadyEvent ToString(): {impressionData}");
        Log.Info($"[AdsManager] Received ImpressionDataReadyEvent allData: {impressionData.AllData}");
    }

    private void OnDisable()
    {
        bannerAd?.DestroyAd();
        interstitialAd?.DestroyAd();
    }

    //     // ---------------- Rewarded ----------------
    //     private void RegisterRewardedEvents()
    //     {
    //         rewardedAd.OnLoaded += () => rewardedReady = true;
    //         rewardedAd.OnFailedLoad += (error, msg) =>
    //         {
    //             rewardedReady = false;
    //             Log.Info($"Rewarded load failed: {msg}");
    //         };

    //         rewardedAd.OnShowed += () => Log.Info("Rewarded ad shown");
    //         rewardedAd.OnClosed += (args) =>
    //         {
    //             if (args.AdShowCompletionState == AdShowCompletionState.COMPLETED)
    //             {
    //                 Log.Info("Rewarded ad completed!");
    //                 onRewardEarned?.Invoke();
    //             }
    //             rewardedAd.LoadAsync();
    //         };
    //     }

    //     public bool IsRewardedReady() => rewardedReady;

    //     public async void ShowRewardedAd(Action onRewarded = null)
    //     {
    // #if UNITY_WEBGL
    //         Log.Info("Simulating rewarded ad (WebGL).");
    //         onRewarded?.Invoke();
    // #else
    //         if (rewardedReady)
    //         {
    //             onRewardEarned = onRewarded;
    //             await rewardedAd.ShowAsync();
    //         }
    //         else
    //         {
    //             Log.Info("Rewarded ad not ready.");
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
    //             Log.Info("Interstitial closed, reloading...");
    //             interstitialAd.LoadAsync();
    //         };
    //         interstitialAd.OnFailedLoad += (error, msg) =>
    //         {
    //             interstitialReady = false;
    //             Log.Info($"Interstitial load failed: {msg}");
    //         };
    //     }

    //     public bool ShouldShowInterstitial()
    //     {
    //         return Time.time - sessionStartTime >= 600f; // 10 minutes
    //     }

    //     public async void ShowInterstitial()
    //     {
    // #if UNITY_WEBGL
    //         Log.Info("Simulating interstitial (WebGL).");
    // #else
    //         if (interstitialReady)
    //         {
    //             await interstitialAd.ShowAsync();
    //         }
    //         else
    //         {
    //             Log.Info("Interstitial not ready, reloading...");
    //             await interstitialAd.LoadAsync();
    //         }
    // #endif
    //         sessionStartTime = Time.time;
    //     }
}
