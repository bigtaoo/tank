using UnityEngine;

namespace ET
{
    [EntitySystemOf(typeof(TankClientSavedFileComponent))]
    [FriendOf(typeof(TankClientSavedFileComponent))]
    public static partial class TankClientSavedFileSystem
    {
        [EntitySystem]
        private static void Awake(this TankClientSavedFileComponent self)
        {
            var file = LightObfuscation.LoadJson(self.FileName);
            if (file == null)
            {
                self.UserInfo = new TankUserInfo();
                self.UserInfo.CurrentMapIndex = 1;
            }
            else
            {
                self.UserInfo = JsonUtility.FromJson<TankUserInfo>(file);
            }
        }

        public static void UpdateGameInfo(this TankClientSavedFileComponent self, int mapIndex, int gold)
        {
            if (self.UserInfo.CurrentMapIndex < mapIndex)
            {
                self.UserInfo.CurrentMapIndex = mapIndex;
            }
            self.UserInfo.Gold = gold;

            LightObfuscation.SaveJson(self.FileName, JsonUtility.ToJson(self.UserInfo));
        }

        public static int GetCurrentMapIndex(this TankClientSavedFileComponent self)
        {
            return self.UserInfo.CurrentMapIndex;
        }
    }
}