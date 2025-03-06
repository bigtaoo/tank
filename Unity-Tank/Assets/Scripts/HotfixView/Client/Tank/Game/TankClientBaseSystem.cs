using ET.Client;
using Unity.Mathematics;
using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankBaseComponent))]
    [FriendOf(typeof(TankBaseComponent))]
    public static partial class TankClientBaseSystem
    {
        [EntitySystem]
        private static void Awake(this TankBaseComponent self)
        {
            var baseObject = GameObject.Find("game-base");
            if (baseObject == null)
            {
                Log.Warning("Can not find the game base object!!!");
                return;
            }
            var position = baseObject.transform.position;

            self.BasePosition = new TankPosition
            {
                X = position.x + TankConsts.TileOffset,
                Y = position.y + TankConsts.TileOffset
            };
        }

        [EntitySystem]
        private static void Update(this TankBaseComponent self)
        {
            var gameResultComponent = self.Root().GetComponent<TankGameResultComponent>();
            if (gameResultComponent.IsGameEnd)
            {
                return;
            }

            var bulletComponent = self.Root().GetComponent<TankBulletComponent>();
            foreach(var bullet in bulletComponent.Bullets.Values)
            {
                // Log.Warning($"bullt {bullet.Position.ToString()}, base: {self.BasePosition.ToString()}");
                if (math.abs(bullet.Position.X - self.BasePosition.X) < 0.5f &&
                    math.abs(bullet.Position.Y - self.BasePosition.Y) < 0.5f)
                {
                    gameResultComponent.IsGameEnd = true;
                    gameResultComponent.IsWin = false;
                    UIHelper.Create(self.Root(), UIType.TankUIGameResult, UILayer.High).Coroutine();

                    return;
                }
            }
        }
    }
}