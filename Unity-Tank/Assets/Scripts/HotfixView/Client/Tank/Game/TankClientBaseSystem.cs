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
            var baseObject = GameObject.Find("base");
            if (baseObject != null)
            {
                Log.Warning("Can not find the base object!!!");
                return;
            }
            var position = baseObject.transform.position;

            self.BasePosition = new TankPosition
            {
                X = position.x + TankConsts.TileOffset,
                Y = position.y + TankConsts.TileOffset
            };
        }
    }
}