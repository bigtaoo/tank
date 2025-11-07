namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientGameInfoComponent : Entity, IAwake
    {
        public bool InputMutex;
        public long InterstitialAdPlayedTime;
        public string NoteInfo;
    }
}