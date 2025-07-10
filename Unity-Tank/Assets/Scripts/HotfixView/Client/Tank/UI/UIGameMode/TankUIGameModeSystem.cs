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
            self.DigitDisplay = rc.Get<GameObject>("DigitDisplay");
            self.MapIndex = rc.Get<GameObject>("MapIndex");
            self.MapIndex.SetActive(true);
            self.MapIndex.GetComponent<Button>().onClick.AddListener(() => { self.StartSingleMode(1).Coroutine(); });

            self.DisplayMapIndex();
        }

        public static async ETTask StartSingleMode(this TankUIGameModeComponent self, int mapIndex)
        {
            Log.Warning($"Start single mode for map: {mapIndex}");
            await TankSceneChangeHelper.SceneChangeTo(self.Root(), TankMapType.Game, $"level-{mapIndex}", self.Root().InstanceId);
            await UIHelper.Remove(self.Root(), UIType.TankUIGameMode);
        }

        private static void DisplayMapIndex(this  TankUIGameModeComponent self)
        {
            var mapCount = self.Config.MapCount;
            //Log.Warning($"Map Count: {mapCount}");
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
            }
        }
    }
}
