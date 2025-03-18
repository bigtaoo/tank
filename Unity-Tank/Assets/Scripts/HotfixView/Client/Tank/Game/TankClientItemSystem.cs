using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankClientItemComponent))]
    [FriendOf(typeof(TankClientItemComponent))]
    public static partial class TankClientItemSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientItemComponent self)
        {
            foreach(TankItemType itemType in Enum.GetValues(typeof(TankItemType)))
            {
                self.AvaiableItemResources.Add(itemType, new List<GameObject>());
            }

            var bomb = GameObject.Find("bomb");
            bomb.SetActive(false);
            self.AvaiableItemResources[TankItemType.Bomb].Add(bomb);
            self.ItemTypeToGameObject[TankItemType.Bomb] = bomb;

            var gold = GameObject.Find("gold");
            gold.SetActive(false);
            self.AvaiableItemResources[TankItemType.Gold].Add(gold);
            self.ItemTypeToGameObject[TankItemType.Gold] = gold;

            var baseUpgrade = GameObject.Find("baseupgrade");
            baseUpgrade.SetActive(false);
            self.AvaiableItemResources[TankItemType.BaseWallUpgrade].Add(baseUpgrade);
            self.ItemTypeToGameObject[TankItemType.BaseWallUpgrade] = baseUpgrade;

            var levelUp = GameObject.Find("levelup");
            levelUp.SetActive(false);
            self.AvaiableItemResources[TankItemType.PlayerTankLevelUp].Add(levelUp);
            self.ItemTypeToGameObject[TankItemType.PlayerTankLevelUp] = levelUp;
        }

        [EntitySystem]
        private static void Update(this TankClientItemComponent self)
        {
            self.CreateItems();
        }

        private static void CreateItems(this TankClientItemComponent self)
        {
            var itemComponent = self.Root().GetComponent<TankItemComponent>();
            foreach(var item in itemComponent.ItemsToAdd)
            {
                var gameObject = self.AvaiableItemResources[item.ItemType].FirstOrDefault();
                if (gameObject == null)
                {
                    gameObject = GameObject.Instantiate(self.ItemTypeToGameObject[item.ItemType]);
                }
                self.Items[item.ItemId] = gameObject;
                gameObject.SetActive(true);
                gameObject.transform.position = new Vector3(
                    item.Position.X - TankConsts.TileOffset,
                    item.Position.Y - TankConsts.TileOffset,
                    gameObject.transform.position.z);
            }
        }
    }
}