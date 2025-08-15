namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientSavedFileComponent : Entity, IAwake
    {
        public readonly string FileName = "tank.dat";
        public TankUserInfo UserInfo;
    }
}