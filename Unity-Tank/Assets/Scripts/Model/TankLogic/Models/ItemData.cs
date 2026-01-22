namespace TankLogic
{
    internal class ItemData
    {
        internal uint ItemId { get; private set; }
        internal ItemType ItemType { get; private set; }
        internal Position Position { get; private set; }
        internal uint Time { get; private set; }
    }
}