using System;
using UnityEngine.SceneManagement;

namespace ET.Client
{
    [Event(SceneType.Tank)]
    public class TankSceneChangeStartEvent : AEvent<Scene, TankSceneChangeStart>
    {
        protected override async ETTask Run(Scene root, TankSceneChangeStart args)
        {
            try
            {
                Scene currentScene = root.CurrentScene();

                root.RemoveComponent<ResourcesLoaderComponent>();
                ResourcesLoaderComponent resourcesLoaderComponent = root.AddComponent<ResourcesLoaderComponent>();

                //Log.Warning($"map type: {args.mapType}");
                // 加载场景资源
                if (args.mapType == TankMapType.UI)
                {
                    //var gameScene = SceneManager.GetActiveScene();
                    //var initScene = SceneManager.GetSceneAt(0);
                    //SceneManager.SetActiveScene(initScene);
                    //await SceneManager.UnloadSceneAsync(gameScene);
                    
                    RemoveGameComponent(root);
                    await resourcesLoaderComponent.LoadSceneAsync($"Assets/Bundles/Scenes/TankUIMap.unity", LoadSceneMode.Single);
                }
                else
                {
                    await resourcesLoaderComponent.LoadSceneAsync($"Assets/Bundles/Scenes/TankMaps/{currentScene.Name}.unity", LoadSceneMode.Single);
                }
                // 切换到map场景

                //await SceneManager.LoadSceneAsync(currentScene.Name);

                //currentScene.AddComponent<OperaComponent>();

                //Log.Warning("load map");
            }
            catch (Exception e)
            {
                Log.Error(e);
            }
        }

        private void RemoveGameComponent(Scene scene)
        {
            // Logic
            scene.RemoveComponent<TankMapTilesComponent>();
            scene.RemoveComponent<TankPlayerComponent>();
            scene.RemoveComponent<TankBulletComponent>();
            scene.RemoveComponent<TankEffectComponent>();
            scene.RemoveComponent<TankRobotComponent>();
            scene.RemoveComponent<TankDamageComponent>();
            scene.RemoveComponent<TankBuffComponent>();
            scene.RemoveComponent<TankGameResultComponent>();
            scene.RemoveComponent<TankItemComponent>();
            scene.RemoveComponent<TankAttachedEffectComponent>();

            // Client
            scene.RemoveComponent<TankCameraComponent>();
            scene.RemoveComponent<TankClientPlayerTankComponent>();
            scene.RemoveComponent<TankClientTileMapComponent>();
            scene.RemoveComponent<TankClientBulletComponent>();
            scene.RemoveComponent<TankClientEffectComponent>();
            scene.RemoveComponent<TankClientRobotComponent>();
            scene.RemoveComponent<TankInitializeConfigComponent>();
            scene.RemoveComponent<TankBaseComponent>();
            scene.RemoveComponent<TankClientItemComponent>();
            scene.RemoveComponent<TankClientAttachedEffectComponent>();

            // Logic
            scene.RemoveComponent<TankLogicComponent>();
        }
    }
}