using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankCameraComponent))]
    [FriendOf(typeof(TankCameraComponent))]
    public static partial class TankCameraSystem
    {
        [EntitySystem]
        private static void Awake(this TankCameraComponent self)
        {
            Application.targetFrameRate = 60;

            //self.SetRandomBackground();
        }

        private static void SetRandomBackground(this TankCameraComponent self)
        {
            const int backgroundCount = 5;
            var selectIndex = Random.Range(0, backgroundCount);
            for (int i = 0; i < backgroundCount; i++)
            {
                var backgroundGameobject = GameObject.Find($"background-{i + 1}");
                if (backgroundGameobject == null)
                {
                    Log.Error($"Background is not found, name: background-{i + 1}");
                    continue;
                }
                if (i == selectIndex)
                {
                    backgroundGameobject.SetActive(true);
                }
                else
                {
                    backgroundGameobject.SetActive(false);
                }
            }
        }
    }
}