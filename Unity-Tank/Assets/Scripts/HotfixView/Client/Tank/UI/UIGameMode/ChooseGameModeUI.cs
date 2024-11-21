namespace ET.Client
{
    [Event(SceneType.Tank)]
    public class ChooseGameModeUI : AEvent<Scene, AppStartInitFinish>
    {
        protected override async ETTask Run(Scene root, AppStartInitFinish args)
        {
            await UIHelper.Create(root, UIType.TankUIGameMode, UILayer.Mid);
        }
    }
}
