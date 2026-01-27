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
            foreach (TankItemType itemType in Enum.GetValues(typeof(TankItemType)))
            {
                self.AvaiableItemResources.Add(itemType, new List<GameObject>());
            }
        }

        [EntitySystem]
        private static void Update(this TankClientItemComponent self)
        {
            self.CreateItems();
            self.RemoveItems();
        }

        private static void CreateItems(this TankClientItemComponent self)
        {
            var itemComponent = self.Root().GetComponent<TankItemComponent>();
            foreach (var item in itemComponent.ItemsToAdd)
            {
                var gameObject = self.AvaiableItemResources[item.ItemType].FirstOrDefault();
                if (gameObject == null)
                {
                    gameObject = self.CreateItemGameObject(item.ItemType);
                }
                self.Items[item.ItemId] = gameObject;
                gameObject.SetActive(true);
                gameObject.transform.position = new Vector3(
                    item.Position.X - TankConsts.TileOffset,
                    item.Position.Y - TankConsts.TileOffset,
                    -2.0f);
                gameObject.transform.localScale = new Vector3(1.5f, 1.5f, 1.0f);
                gameObject.name = $"Item-{item.ItemId}";

                Log.Info($"Create item id: {item.ItemId}, type: {item.ItemType}, position: {gameObject.transform.position.ToString()}, active: {gameObject.activeInHierarchy}");
            }
            itemComponent.ItemsToAdd.Clear();
        }

        private static void RemoveItems(this TankClientItemComponent self)
        {
            var itemComponent = self.Root().GetComponent<TankItemComponent>();
            foreach (var item in itemComponent.ItemsToRemove)
            {
                var gameObject = self.Items[item.ItemId];
                gameObject.SetActive(false);
                self.Items.Remove(item.ItemId);
                self.AvaiableItemResources[item.ItemType].Add(gameObject);

                SoundManager.Instance.PlayItemPickUp();

                Log.Info($"Remove item id: {item.ItemId} type: {item.ItemType}");
            }
            itemComponent.ItemsToRemove.Clear();
        }

        private static GameObject CreateItemGameObject(this TankClientItemComponent self, TankItemType itemType)
        {
            var gameObject = new GameObject();
            var spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
            var spriteName = itemType switch
            {
                TankItemType.BaseWallUpgrade => "baseupgrad",
                TankItemType.Bomb => "bomb",
                TankItemType.Gold => "gold",
                TankItemType.PlayerLife => "life",
                TankItemType.PlayerTankLevelUp => "levelup",
                TankItemType.Shield => "shield",
                TankItemType.TimeStop => "timestoper",
                _ => "bomb",
            };
            var sprite = AtlasManager.Instance.GetSprite(spriteName);
            if (sprite == null)
            {
                Log.Error($"Item sprite can not be found for type: {itemType}");
                return gameObject;
            }
            spriteRenderer.sprite = sprite;

            return gameObject;
        }
    }
}