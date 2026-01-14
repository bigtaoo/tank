namespace TankLogic
{
    internal class Buff
    {
        private readonly Main _main;
        internal BuffData BuffData { get; private set; }
        internal uint RemoveTime { get; private set; }

        internal Buff(Main main, BuffData buffData)
        {
            _main = main;
            BuffData = buffData;
            RemoveTime = _main.GameTime + buffData.Time;
        }
    }
}