namespace ET.Client
{
    public static partial class TankSceneChangeHelper
    {
        // 场景切换协程
        public static async ETTask SceneChangeTo(Scene root, TankMapType mapType, string sceneName, long sceneInstanceId)
        {
            root.RemoveComponent<AIComponent>();

            CurrentScenesComponent currentScenesComponent = root.GetComponent<CurrentScenesComponent>();
            currentScenesComponent.Scene?.Dispose(); // 删除之前的CurrentScene，创建新的
            Scene currentScene = CurrentSceneFactory.Create(sceneInstanceId, sceneName, currentScenesComponent);
            //UnitComponent unitComponent = currentScene.AddComponent<UnitComponent>();

            //Log.Warning("Change scene");
            // 可以订阅这个事件中创建Loading界面
            EventSystem.Instance.Publish(root, new TankSceneChangeStart { mapType = mapType });
            // 等待CreateMyUnit的消息
            //Wait_CreateMyUnit waitCreateMyUnit = await root.GetComponent<ObjectWait>().Wait<Wait_CreateMyUnit>();
            //M2C_CreateMyUnit m2CCreateMyUnit = waitCreateMyUnit.Message;
            //Unit unit = UnitFactory.Create(currentScene, m2CCreateMyUnit.Unit);
            //unitComponent.Add(unit);
            //root.RemoveComponent<AIComponent>();

            await root.GetComponent<TimerComponent>().WaitAsync(300);
            EventSystem.Instance.Publish(root, new TankSceneChangeEnd { mapType = mapType });
            
            // 通知等待场景切换的协程
            root.GetComponent<ObjectWait>().Notify(new Wait_SceneChangeFinish());

            await ETTask.CompletedTask;
        }
    }
}