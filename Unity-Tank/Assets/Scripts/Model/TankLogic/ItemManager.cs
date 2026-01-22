using System.Collections.Generic;
using System.Linq;

namespace TankLogic
{
    internal class ItemManager
    {
        private readonly Main _main;
        private readonly Dictionary<uint, Item> Items = new();

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
            var itemIndex = _main.Random.RandomInt(0, SpawnItemTypes.Length);
            var itemType = self.SpawnItemTypes[itemIndex];

            var itemData = new ItemData
            {
                ItemId = self.ItemId++,
                ItemType = itemType,
                LivingEndTime = 10 * 1000,
                Position = position,
            };
            Items.Add(item.ItemId, item);
            _main.Logger.Warning($"Spawn item: {item.ToJson()}");
        }

        private void PickUpItem()
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var playerPosition = playerComponent.GetPlayerPosition();

            foreach (var item in self.Items.Values)
            {
                if (math.abs(playerPosition.X - item.Position.X) < 0.5f &&
                    math.abs(playerPosition.Y - item.Position.Y) < 0.5f)
                {
                    self.ItemEffect(item);
                    self.RemoveItem(item);
                    break;
                }
            }
        }

        private void ItemEffect(Item item)
        {
            switch (item.ItemType)
            {
                case TankItemType.Bomb:
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
                case TankItemType.BaseWallUpgrade:
                    {
                        // var baseComponent = self.Root().GetComponent<TankBaseComponent>();
                        // baseComponent.UpgradeBaseWalls();
                        break;
                    }
                case TankItemType.PlayerTankLevelUp:
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        playerComponent.UpdatePlayerTankLevel(1);
                        break;
                    }
                case TankItemType.Gold:
                    {
                        var gameInfoComponent = self.Root().GetComponent<TankGameInfoComponent>();
                        gameInfoComponent.AddGold();
                        break;
                    }
                case TankItemType.PlayerLife:
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        playerComponent.UpdatePlayerLifes(1);
                        break;
                    }
                case TankItemType.Shield:
                    {
                        var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Invincible, 3000);
                        var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
                        // attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, null, true);
                        break;
                    }
                case TankItemType.TimeStop:
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