using UnityEngine;

namespace ET
{
    record userinfo;
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

            var json = JsonUtility.ToJson(self.UserInfo);
            Log.Info($"Save game info: {json}");

            LightObfuscation.SaveJson(self.FileName, json);
        }

        public static int GetCurrentMapIndex(this TankClientSavedFileComponent self)
        {
            return self.UserInfo.CurrentMapIndex;
        }

        public static int GetSkillLevel(this TankClientSavedFileComponent self, TankSkillType skillType)
        {
            foreach (var skill in self.UserInfo.SkillLevels)
            {
                if (skill.SkillType == skillType)
                {
                    return skill.SkillLevel;
                }
            }
            return 0;
        }

        public static void SaveTankConfigResult(this TankClientSavedFileComponent self)
        {
            Log.Warning($"skill levels count: {self.UserInfo.SkillLevels.Count}");
            var json = JsonUtility.ToJson(self.UserInfo);
            Log.Info($"Save game info from tank config: {json}");
            LightObfuscation.SaveJson(self.FileName, json);
        }
    }
}