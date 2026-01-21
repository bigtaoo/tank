using ET.Client;

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

            var tankGameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            if (tankGameInfoComponent.TankLogicUnityLogger == null)
            {
                tankGameInfoComponent.TankLogicUnityLogger = new TankLogicUnityLogger();
            }
        }

        [EntitySystem]
        private static void Update(this ET.TankClientGameInfoComponent self)
        {
            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            if (!gameInfoComponent.IsGameResultUIShowed && gameInfoComponent.IsGameEnd)
            {
                gameInfoComponent.IsGameResultUIShowed = true;
                UIHelper.Create(self.Root(), UIType.TankUIGameResult, UILayer.Mid).Coroutine();
            }
        }

        public static bool ShouldPlayInterstitialAd(this TankClientGameInfoComponent self)
        {
            if (self == null)
            {
                Log.Error("client game info is null");
            }
            var clientTime = TimeInfo.Instance.ClientFrameTime();
            if (clientTime - self.InterstitialAdPlayedTime > 10 * 60 * 1000)
            {
                self.InterstitialAdPlayedTime = clientTime;
                return true;
            }
            return false;
        }

        public static void SetInputMutex(this TankClientGameInfoComponent self, bool value)
        {
            self.InputMutex = value;
        }

        public static bool GetInputMutex(this TankClientGameInfoComponent self)
        {
            return self.InputMutex;
        }

        public static void SetNoteInfo(this TankClientGameInfoComponent self, string info)
        {
            self.NoteInfo = info;
        }
        public static string GetNoteInfo(this TankClientGameInfoComponent self)
        {
            return self.NoteInfo;
        }
    }
}