namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankClientGameInfoComponent : Entity, IAwake, IUpdate
    {
        public bool InputMutex;
        public long InterstitialAdPlayedTime;
        public string NoteInfo;
        public bool IsGameResultUIShowed;
    }
}