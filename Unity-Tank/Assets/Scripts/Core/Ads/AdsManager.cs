using System;
using UnityEngine;
using Unity.Services.LevelPlay;
using ET;

public class AdsManager : MonoBehaviour
{
    public static AdsManager Instance { get; private set; }
    public Action PlayInterstitialAdEnd { get; set; }
    public Action<bool> PlayRewardedAdEnd { get; set; }

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

    private void Start()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        Debug.Log("[AdsManager] LevelPlay.ValidateIntegration");

        LevelPlay.ValidateIntegration();

        Debug.Log($"[AdsManager] Unity version {LevelPlay.UnityVersion}");

        Debug.Log("[AdsManager] Register initialization callbacks");
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
        Debug.Log("[AdsManager] LevelPlay SDK initialization");
        LevelPlay.Init(appKey);
    }

    public void LoadRewardedVideo()
    {
        Debug.Log("[AdsManager] Start loading rewarded video.");
        rewardedVideoAd.LoadAd();
    }

    public void PlayRewardedVideo()
    {
        Debug.Log("[AdsManager] Start playing rewarded video.");
        if (rewardedVideoAd.IsAdReady())
        {
            Debug.Log("[AdsManager] Showing Rewarded Video Ad.");
            rewardedVideoAd.ShowAd();
        }
        else
        {
            Debug.Log("[AdsManager] LevelPlay Rewarded Video Ad is not ready, giving a discount reward.");
            PlayRewardedAdEnd?.Invoke(false);
        }
    }

    public void LoadInterstitialVideo()
    {
        Debug.Log("[AdsManager] Start loading interstitial video.");
        interstitialAd.LoadAd();
    }

    public void PlayInterstitialVideo()
    {
        Debug.Log("[AdsManager] Start playing interstitial video.");
        if (interstitialAd.IsAdReady())
        {
            Debug.Log("[AdsManager] Showing Interstitial Ad.");
            interstitialAd.ShowAd();
        }
        else
        {
            Debug.Log("[AdsManager] LevelPlay Interstital Ad is not ready, skip it.");
            PlayInterstitialAdEnd?.Invoke();
        }
    }

    public void DisplayBannerAd()
    {
        Debug.Log("[AdsManager] Showing Banner Ad.");
        bannerAd.LoadAd();
    }
    
    public void HideBannerAd()
    {
        Debug.Log("[AdsManager] Hidding Banner Ad.");
        bannerAd.HideAd();
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
        Debug.Log($"[AdsManager] Received SdkInitializationCompletedEvent with Config: {config}");
        EnableAds();
    }

    void SdkInitializationFailedEvent(LevelPlayInitError error)
    {
        Debug.Log($"[AdsManager] Received SdkInitializationFailedEvent with Error: {error}");
    }

    void RewardedVideoOnLoadedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnLoadedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdLoadFailedEvent(LevelPlayAdError error)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdLoadFailedEvent With Error: {error}");
    }

    void RewardedVideoOnAdDisplayedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdDisplayedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdDisplayedFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdDisplayedFailedEvent With AdInfo: {adInfo} and Error: {error}");

        PlayRewardedAdEnd?.Invoke(false);
    }

    void RewardedVideoOnAdRewardedEvent(LevelPlayAdInfo adInfo, LevelPlayReward reward)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdRewardedEvent With AdInfo: {adInfo} and Reward: {reward}");

        PlayRewardedAdEnd?.Invoke(true);
    }

    void RewardedVideoOnAdClickedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdClickedEvent With AdInfo: {adInfo}");
    }

    void RewardedVideoOnAdClosedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdClosedEvent With AdInfo: {adInfo}");

        PlayRewardedAdEnd?.Invoke(true);
    }

    void RewardedVideoOnAdInfoChangedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received RewardedVideoOnAdInfoChangedEvent With AdInfo {adInfo}");
    }

    void InterstitialOnAdLoadedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdLoadedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdLoadFailedEvent(LevelPlayAdError error)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdLoadFailedEvent With Error: {error}");
    }

    void InterstitialOnAdDisplayedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdDisplayedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdDisplayFailedEvent With AdInfo: {adInfo} and Error: {error}");

        PlayInterstitialAdEnd?.Invoke();
    }

    void InterstitialOnAdClickedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdClickedEvent With AdInfo: {adInfo}");
    }

    void InterstitialOnAdClosedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdClosedEvent With AdInfo: {adInfo}");

        PlayInterstitialAdEnd?.Invoke();
    }

    void InterstitialOnAdInfoChangedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received InterstitialOnAdInfoChangedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdLoadedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdLoadedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdLoadFailedEvent(LevelPlayAdError error)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdLoadFailedEvent With Error: {error}");
    }

    void BannerOnAdClickedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdClickedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdDisplayedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdDisplayedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdDisplayFailedEvent With AdInfo: {adInfo} and Error: {error}");
    }

    void BannerOnAdCollapsedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdCollapsedEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdLeftApplicationEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdLeftApplicationEvent With AdInfo: {adInfo}");
    }

    void BannerOnAdExpandedEvent(LevelPlayAdInfo adInfo)
    {
        Debug.Log($"[AdsManager] Received BannerOnAdExpandedEvent With AdInfo: {adInfo}");
    }

    void ImpressionDataReadyEvent(LevelPlayImpressionData impressionData)
    {
        Debug.Log($"[AdsManager] Received ImpressionDataReadyEvent ToString(): {impressionData}");
        Debug.Log($"[AdsManager] Received ImpressionDataReadyEvent allData: {impressionData.AllData}");
    }

    private void OnDisable()
    {
        bannerAd?.DestroyAd();
        interstitialAd?.DestroyAd();
    }
}
