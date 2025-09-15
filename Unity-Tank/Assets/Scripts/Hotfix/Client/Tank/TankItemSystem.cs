using MongoDB.Bson;
using System.Linq;
using Unity.Mathematics;

namespace ET
{
    [EntitySystemOf(typeof(TankItemComponent))]
    [FriendOf(typeof(TankItemComponent))]
    public static partial class TankItemSystem
    {
        [EntitySystem]
        private static void Awake(this TankItemComponent self)
        {
            self.ItemId = 10;
        }

        [EntitySystem]
        private static void Update(this TankItemComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach(var key in self.Items.Keys.ToList())
            {
                var item = self.Items[key];
                if (item.LivingEndTime < currentTime)
                {
                    self.RemoveItem(item);
                }
            }

            self.PickUpItem();
        }

        public static void SpawnItem(this TankItemComponent self, TankPosition position)
        {
            var spawnItemRate = RandomGenerator.RandUInt32() % 100;
            Log.Info($"Item spawn rate: {spawnItemRate}");
            if (spawnItemRate > TankConsts.SpawnItemRate)
            {
                return;
            }
            var itemIndex = RandomGenerator.RandUInt32() % self.SpawnItemTypes.Length;
            var itemType = self.SpawnItemTypes[itemIndex];

            var item = new TankItem
            {
                ItemId = self.ItemId++,
                ItemType = itemType,
                LivingEndTime = TimeInfo.Instance.ClientFrameTime() + TankConsts.ItemLivingMS,
                Position = position,
            };
            self.Items[item.ItemId] = item;
            self.ItemsToAdd.Add(item);
            Log.Info($"Spawn item: {item.ToJson()}");
        }

        private static void PickUpItem(this TankItemComponent self)
        {
            var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            var playerPosition = playerComponent.Position;

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

        private static void RemoveItem(this TankItemComponent self, TankItem item)
        {
            self.ItemsToRemove.Add(item);
            self.Items.Remove(item.ItemId);
        }

        private static void ItemEffect(this TankItemComponent self, TankItem item)
        {
            switch (item.ItemType)
            {
                case TankItemType.Bomb:
                    {
                        var robotComponent = self.Root().GetComponent<TankRobotComponent>();
                        var selectedRobot = robotComponent.Robots.Take(3).ToList();
                        foreach (var robot in selectedRobot)
                        {
                            robot.HealthPoint = -1;
                        }
                        break;
                    }
                case TankItemType.BaseWallUpgrade:
                    {
                        var baseComponent = self.Root().GetComponent<TankBaseComponent>();
                        baseComponent.UpgradeBaseWalls();
                        break;
                    }
                case TankItemType.PlayerTankLevelUp:
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        if (playerComponent.TankLevel <= 3)
                        {
                            playerComponent.TankLevel++;
                        }
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
                        playerComponent.PlayerLifes++;
                        break;
                    }
                case TankItemType.Shield:
                    {
                        var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Invincible, 3000);
                        var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
                        attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, null, true);
                        break;
                    }
                case TankItemType.TimeStop:
                    {
                        var robotComponent = self.Root().GetComponent<TankRobotComponent>();
                        var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        foreach (var robot in robotComponent.Robots)
                        {
                            buffComponent.AddBuff(robot.RobotId, TankBuffType.CanNotMove, 3000);
                        }
                        break;
                    }
            }
        }
    }
}