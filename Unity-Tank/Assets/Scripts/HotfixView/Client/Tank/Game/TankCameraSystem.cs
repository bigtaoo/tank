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
            //var gameCamera = GameObject.Find("GameCamera");
            //if (gameCamera != null)
            //{
            //    gameCamera.SetActive(false);
            //    self.Camera = gameCamera.GetComponent<Camera>();
            //    //Log.Warning("Active the game camera");
            //}

            //var originalCamera = GameObject.Find("OriginalCamera");
            //if (originalCamera != null)
            //{
            //    //Log.Warning("Deactive the original camera");
            //    originalCamera.SetActive(true);
            //}

            //Log.Warning("TankCameraComponent awake");

            Application.targetFrameRate = 60;

            self.SetRandomBackground();
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