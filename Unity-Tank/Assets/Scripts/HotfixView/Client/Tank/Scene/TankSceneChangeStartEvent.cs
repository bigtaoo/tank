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
                //Scene currentScene = root.CurrentScene();

                ResourcesLoaderComponent resourcesLoaderComponent = root.GetComponent<ResourcesLoaderComponent>();

                // 加载场景资源
                await resourcesLoaderComponent.LoadSceneAsync($"Assets/Bundles/Scenes/TankGameMap.unity", LoadSceneMode.Single);
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
    }
}