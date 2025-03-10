using System;
using System.Collections.Generic;
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

            var gold = GameObject.Find("gold");
            gold.SetActive(false);
            self.AvaiableItemResources[TankItemType.Gold].Add(gold);

            var baseUpgrade = GameObject.Find("baseupgrade");
            baseUpgrade.SetActive(false);
            self.AvaiableItemResources[TankItemType.BaseWallUpgrade].Add(baseUpgrade);

            var levelUp = GameObject.Find("levelup");
            levelUp.SetActive(false);
            self.AvaiableItemResources[TankItemType.PlayerTankLevelUp].Add(levelUp);
        }

        [EntitySystem]
        private static void Update(this TankClientItemComponent self)
        {

        }
    }
}