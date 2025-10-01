using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUIGameModeComponent))]
    [FriendOf(typeof(TankUIGameModeComponent))]
    public static partial class TankUIGameModeSystem
    {
        [EntitySystem]
        private static void Awake(this TankUIGameModeComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();

            self.Config = rc.Get<GameObject>("Config").GetComponent<GameModeConfig>();
            self.MapIndex = rc.Get<GameObject>("MapIndex");
            self.MapIndex.SetActive(true);
            self.MapIndex.GetComponent<Button>().onClick.AddListener(() => { self.StartSingleMode(1).Coroutine(); });
            var digitDisplay = self.MapIndex.GetComponentInChildren<DigitDisplay>();
            digitDisplay.DisplayNumber(1);

            self.DisplayMapIndex();
            self.LoadGameInfo();

            self.EN = rc.Get<GameObject>("EN");
            self.EN.GetComponent<Button>().onClick.AddListener(() => { LocaleHelper.Instance.SetEN(); });
            self.DE = rc.Get<GameObject>("DE");
            self.DE.GetComponent<Button>().onClick.AddListener(() => { LocaleHelper.Instance.SetDE(); });
            self.ZH = rc.Get<GameObject>("ZH");
            self.ZH.GetComponent<Button>().onClick.AddListener(() => { LocaleHelper.Instance.SetZH(); });
        }

        public static async ETTask StartSingleMode(this TankUIGameModeComponent self, int mapIndex)
        {
            SoundManager.Instance.PlayButtonClick();

            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var currentMapIndex = savedFileComponent.GetCurrentMapIndex();
            if (mapIndex > currentMapIndex)
            {
                Log.Warning($"The map is locked. Try to join {mapIndex} but can only join until {currentMapIndex}");
                return;
            }

            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
            gameInfoComponent.StartNewGame(mapIndex);

            Log.Info($"Start single mode for map: {mapIndex}");
            await TankSceneChangeHelper.SceneChangeTo(self.Root(), TankMapType.Game, $"level-{mapIndex}", self.Root().InstanceId);
            await UIHelper.Remove(self.Root(), UIType.TankUIGameMode);
        }

        private static void DisplayMapIndex(this  TankUIGameModeComponent self)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var currentMapIndex = savedFileComponent.GetCurrentMapIndex();

            var mapCount = self.Config.MapCount;
            // Log.Warning($"Map Count: {mapCount}");
            const int mapCountInRow = 5;
            const int width = 180 + 10;
            const int height = 135 + 10;

            for (int i = 1; i < mapCount; i++)
            {
                int rowIndex = i / mapCountInRow;
                int columnIndex = i % mapCountInRow;
                var position = new Vector3(columnIndex * width, -rowIndex * height, 0);
                var clone = GameObject.Instantiate(self.MapIndex, self.MapIndex.transform.parent);
                clone.transform.localPosition = position + self.MapIndex.transform.localPosition;
                //Log.Warning($"Actual position: {clone.transform.position}");
                clone.SetActive(true);

                var showingIndex = i + 1;
                clone.GetComponent<Button>().onClick.AddListener(() => { self.StartSingleMode(showingIndex).Coroutine(); });

                var digitDisplay = clone.GetComponentInChildren<DigitDisplay>();
                digitDisplay.DisplayNumber(showingIndex);

                var lockImage = clone.transform.Find("Locker").gameObject;
                //Log.Warning($"lock image: {lockImage.name}, current index: {currentMapIndex}");
                if (i >= currentMapIndex)
                {
                    //Log.Warning($"current index: {currentMapIndex}, index: {i}, set active true");
                    lockImage.SetActive(true);
                }
                else
                {
                    lockImage.SetActive(false);
                }
            }
        }

        private static void LoadGameInfo(this TankUIGameModeComponent self)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();

            gameInfoComponent.GameInfo.Gold = savedFileComponent.UserInfo.Gold;
        }
    }
}
