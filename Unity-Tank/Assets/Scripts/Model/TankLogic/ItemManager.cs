using System;
using System.Collections.Generic;
using System.Linq;

namespace TankLogic
{
    internal class ItemManager
    {
        private readonly Main _main;
        internal Dictionary<uint, Item> Items { get; private set; } = new();
        private readonly ItemType[] ItemTypes = (ItemType[])Enum.GetValues(typeof(ItemType));

        internal ItemManager(Main main)
        {
            _main = main;
        }

        internal void UpdateItems()
        {
            foreach(var key in Items.Keys.ToList())
            {
                var item = Items[key];
                if (item.LivingEndTime < _main.GameTime)
                {
                    // _main.Logger.Warning($"Remove item {key}");
                    Items.Remove(key);
                }
            }

            PickUpItem();
        }

        internal void SpawnItem(Position position)
        {
            var spawnItemRate = _main.Random.RandomInt(0, 100);
            // _main.Logger.Warning($"Item spawn rate: {spawnItemRate}");
            if (spawnItemRate > 150)
            {
                return;
            }
            var itemIndex = _main.Random.RandomInt(1, (int)ItemType.Count);
            var itemType = ItemTypes[itemIndex];

            var itemData = new ItemData(itemType, position, 10 * 1000);
            var item = new Item(_main, itemData);
            Items.Add(item.ItemId, item);
            // _main.Logger.Warning($"Spawn item: {item.ItemId}");
        }

        private void PickUpItem()
        {
            var player = _main.PlayerManager.GetPlayer();
            var position = player.PlayerData.CurrentPosition;
            foreach (var key in Items.Keys.ToList())
            {
                var item = Items[key];
                // _main.Logger.Warning($"Player x {position.X}, y {position.Y}, item x {item.ItemData.Position.X}, y {item.ItemData.Position.Y}");
                if (Math.Abs(position.X - item.ItemData.Position.X) < 1000 &&
                    Math.Abs(position.Y - item.ItemData.Position.Y) < 1000)
                {
                    // _main.Logger.Warning($"Pick up item id: {item.ItemId}");
                    ItemEffect(item);
                    Items.Remove(key);
                    break;
                }
            }
        }

        private void ItemEffect(Item item)
        {
            switch (item.ItemData.ItemType)
            {
                case ItemType.Bomb:
                    {
                        var selectedRobot = _main.RobotManager.Robots.Values
                            .Where(r => _main.BuffManager.GetBuff(r.RobotId, BuffType.Invincible) == null)
                            .Take(3).ToList();
                        foreach (var robot in selectedRobot)
                        {
                            robot.OnRobotHit();
                        }
                        break;
                    }
                case ItemType.BaseWallUpgrade:
                    {
                        _main.Headquarter.BaseWallsUpgrade();
                        break;
                    }
                case ItemType.PlayerTankLevelUp:
                    {
                        var player = _main.PlayerManager.GetPlayer();
                        player.UpgradeTankLevel();
                        break;
                    }
                case ItemType.Gold:
                    {
                        _main.AddGold();
                        break;
                    }
                case ItemType.PlayerLife:
                    {
                        var player = _main.PlayerManager.GetPlayer();
                        player.PlayerData.PlayerLifes++;
                        break;
                    }
                case ItemType.Shield:
                    {
                        var player = _main.PlayerManager.GetPlayer();
                        var buffData = new BuffData(_main.GetId(), player.PlayerId, BuffType.Invincible, 3000);
                        _main.BuffManager.AddBuff(buffData);

                        var effect = new Effect(_main.GetId(), player.PlayerId, player.PlayerData.CurrentPosition.Copy(),
                            EffectType.InvincibleShield,3000);
                        _main.EffectManager.AddClientEffect(effect);
                        break;
                    }
                case ItemType.TimeStop:
                    {
                        foreach (var robot in _main.RobotManager.Robots.Values)
                        {
                            var buffData = new BuffData(_main.GetId(), robot.RobotId, BuffType.CanNotMove, 3000);
                            _main.BuffManager.AddBuff(buffData);
                        }
                        break;
                    }
            }
        }
    }
}