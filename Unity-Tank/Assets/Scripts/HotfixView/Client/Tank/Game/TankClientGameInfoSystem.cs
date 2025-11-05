namespace ET
{
    [EntitySystemOf(typeof(TankClientGameInfoComponent))]
    [FriendOf(typeof(TankClientGameInfoComponent))]
    public static partial class TankClientGameInfoSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientGameInfoComponent self)
        {
            self.InterstitialAdPlayedTime = TimeInfo.Instance.ClientFrameTime();
        }

        public static bool ShouldPlayInterstitialAd(this TankClientGameInfoComponent self)
        {
            var clientTime = TimeInfo.Instance.ClientFrameTime();
            if (clientTime - self.InterstitialAdPlayedTime > 1 * 60 * 1000)
            {
                self.InterstitialAdPlayedTime = clientTime;
                return true;
            }
            return false;
        }
    }
}