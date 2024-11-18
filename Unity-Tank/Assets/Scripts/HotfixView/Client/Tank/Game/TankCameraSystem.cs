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
            var gameCamera = GameObject.Find("GameCamera");
            if (gameCamera != null)
            {
                gameCamera.SetActive(true);
                self.Camera = gameCamera.GetComponent<Camera>();
                Log.Warning("Active the game camera");
            }

            var originalCamera = GameObject.Find("OriginalCamera");
            if (originalCamera != null)
            {
                Log.Warning("Deactive the original camera");
                originalCamera.SetActive(false);
            }

            Log.Warning("TankCameraComponent awake");
        }
    }
}