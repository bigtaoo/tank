namespace TankLogic
{
    internal class BuffData
    {
        internal uint BuffId { get; private set; }
        internal uint TankId { get; private set; }
        internal BuffType BuffType{ get; private set; }
        internal uint Time { get; private set; }

        internal BuffData(uint buffId, uint tankId, BuffType buffType, uint time)
        {
            BuffId = buffId;
            TankId = tankId;
            BuffType = buffType;
            Time = time;
        }
    }
}