namespace ET.Client
{
    [Event(SceneType.Tank)]
    public class TankSceneChangeEndEvent : AEvent<Scene, TankSceneChangeEnd>
    {
        protected override async ETTask Run(Scene scene, TankSceneChangeEnd args)
        {
            //scene.AddComponent<UIComponent>();
            //scene.AddComponent<ResourcesLoaderComponent>();

            // Logic
            scene.AddComponent<TankMapTilesComponent>();
            scene.AddComponent<TankPlayerComponent>();

            // Client
            scene.AddComponent<TankCameraComponent>();
            scene.AddComponent<TankClientPlayerTankComponent>();
            scene.AddComponent<TankClientTileMapComponent>();
            scene.AddComponent<TankClientBulletComponent>();

            await UIHelper.Create(scene, UIType.TankUIGameMain, UILayer.Mid);
        }
    }
}