namespace ET.Client
{
    [Event(SceneType.Tank)]
    public class TankSceneChangeEndEvent : AEvent<Scene, TankSceneChangeEnd>
    {
        protected override async ETTask Run(Scene scene, TankSceneChangeEnd args)
        {
            scene.AddComponent<UIComponent>();
            scene.AddComponent<ResourcesLoaderComponent>();
            await ETTask.CompletedTask;
        }
    }
}