namespace TankLogic
{
    internal class ItemData
    {
        internal ItemType ItemType { get; private set; }
        internal Position Position { get; private set; }
        internal uint Time { get; private set; }

        internal ItemData(ItemType itemType, Position position, uint time)
        {
            ItemType = itemType;
            Position = position;
            Time = time;
        }
    }
}