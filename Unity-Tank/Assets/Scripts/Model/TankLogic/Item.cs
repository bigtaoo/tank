namespace TankLogic
{
    internal class Item
    {
        private Main _main;
        internal ItemData ItemData { get; private set; }
        internal uint LivingEndTime { get; private set; }
        internal uint ItemId { get; private set; }

        internal Item(Main main, ItemData itemData)
        {
            _main = main;
            ItemData = itemData;
            LivingEndTime = itemData.Time + _main.GameTime;
            ItemId = _main.GetId();
        }
    }
}