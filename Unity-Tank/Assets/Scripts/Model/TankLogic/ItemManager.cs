using System;
using System.Collections.Generic;
using System.Linq;

namespace TankLogic
{
    internal class ItemManager
    {
        private readonly Main _main;
        private readonly Dictionary<uint, Item> Items = new();
        private readonly ItemType[] ItemTypes = (ItemType[])Enum.GetValues(typeof(ItemType));

        internal ItemManager(Main main)
        {
            _main = main;
        }

        internal void Update()
        {
            foreach(var key in Items.Keys.ToList())
            {
                var item = Items[key];
                if (item.LivingEndTime < _main.GameTime)
                {
                    Items.Remove(key);
                }
            }

            PickUpItem();
        }

        internal void SpawnItem(Position position)
        {
            var spawnItemRate = _main.Random.RandomInt(0, 100);
            _main.Logger.Warning($"Item spawn rate: {spawnItemRate}");
            if (spawnItemRate > 50)
            {
                return;
            }
            var itemIndex = _main.Random.RandomInt(1, (int)ItemType.Count);
            var itemType = ItemTypes[itemIndex];

            var itemData = new ItemData(itemType, position, 10 * 1000);
            var item = new Item(_main, itemData);
            Items.Add(item.ItemId, item);
            _main.Logger.Warning($"Spawn item: {item.ItemId}");
        }

        private void PickUpItem()
        {
            var player = _main.PlayerManager.GetPlayer();
            var position = player.PlayerData.CurrentPosition;
            foreach (var key in Items.Keys.ToList())
            {
                var item = Items[key];
                if (Math.Abs(position.X - item.ItemData.Position.X) < 500 &&
                    Math.Abs(position.Y - item.ItemData.Position.Y) < 500)
                {
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
                        // var robotComponent = self.Root().GetComponent<TankRobotComponent>();
                        // var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        // var selectedRobot = robotComponent.Robots.Values.Where(r => buffComponent.GetBuff(r.RobotId, TankBuffType.Invincible) == null)
                        //     .Take(3).ToList();
                        // foreach (var robot in selectedRobot)
                        // {
                        //     robot.Level = 0;
                        // }
                        break;
                    }
                case ItemType.BaseWallUpgrade:
                    {
                        // var baseComponent = self.Root().GetComponent<TankBaseComponent>();
                        // baseComponent.UpgradeBaseWalls();
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
                        var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
                        gameInfoComponent.AddGold();
                        break;
                    }
                case ItemType.PlayerLife:
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        playerComponent.UpdatePlayerLifes(1);
                        break;
                    }
                case ItemType.Shield:
                    {
                        var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Invincible, 3000);
                        var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
                        // attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, null, true);
                        break;
                    }
                case ItemType.TimeStop:
                    {
                        // var robotComponent = self.Root().GetComponent<TankRobotComponent>();
                        // var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        // foreach (var robot in robotComponent.Robots.Values)
                        // {
                        //     buffComponent.AddBuff(robot.RobotId, TankBuffType.CanNotMove, 3000);
                        // }
                        break;
                    }
            }
        }
    }
}