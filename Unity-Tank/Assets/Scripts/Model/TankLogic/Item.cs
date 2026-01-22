namespace TankLogic
{
    internal class Item
    {
        private Main _main;
        private ItemData _itemData;
        internal uint LivingEndTime { get; private set; }

        internal Item(Main main, ItemData itemData)
        {
            _main = main;
            _itemData = itemData;
            LivingEndTime = itemData.Time + _main.GameTime;
        }
    }
}