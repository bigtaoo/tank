using System;

namespace ET
{
    [EntitySystemOf(typeof(TankGameInfoComponent))]
    [FriendOf(typeof(TankGameInfoComponent))]
    public static partial class TankGameInfoSystem
    {
        [EntitySystem]
        private static void Awake(this TankGameInfoComponent self)
        {

        }

        public static void AddGold(this TankGameInfoComponent self)
        {
            self.GameInfo.Gold++;
        }

        public static int GetGold(this TankGameInfoComponent self)
        {
            return self.GameInfo.Gold;
        }

        public static void SetGold(this TankGameInfoComponent self, int gold)
        {
            self.GameInfo.Gold = gold;
        }

        public static void StartNewGame(this TankGameInfoComponent self, int mapIndex)
        {
            self.IsGameResultUIShowed = false;
            self.GameInfo.MapIndex = mapIndex;
            self.GameInfo.GameStartTime = DateTime.UtcNow.ToString("yyyy-MM-dd HH:mm:ss");
        }

        public static void EndGame(this TankGameInfoComponent self, bool isWin)
        {
            self.GameInfo.IsWin = isWin;
            self.GameInfo.GameEndTime = DateTime.UtcNow.ToString("yyyy-MM-dd HH:mm:ss");
        }
    }
}