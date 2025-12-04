namespace TankLogic
{
    internal class Buff
    {
        internal uint BuffId { get; set; }
        internal uint TankId { get; set; }
        internal BuffType BuffType{ get; set; }
        internal uint Time { get; set; }

        internal Buff(uint buffId, uint tankId, BuffType buffType, uint time)
        {
            BuffId = buffId;
            TankId = tankId;
            BuffType = buffType;
            Time = time;
        }
    }
}