using System.Collections.Generic;

namespace ET
{
    [EnableClass]
    [System.Serializable]
    public class TankUserInfo
    {
        public int CurrentMapIndex;
        public int Gold;
        public int TankMoveSpeedLevel;
        public int BulletMoveSpeedLevel;
        public int TankShootSpeedLevel;
        public TankSkillType SelectedSkillType;

        public List<SkillLevelEntry> skillLevels = new();

        [System.NonSerialized]
        public Dictionary<TankSkillType, int> SkillLevel = new();

        [System.Serializable]
        [EnableClass]
        public class SkillLevelEntry
        {
            public TankSkillType SkillType;
            public int Level;
        }

        // Call before saving
        public void SyncToList()
        {
            skillLevels.Clear();
            foreach (var kvp in SkillLevel)
                skillLevels.Add(new SkillLevelEntry { SkillType = kvp.Key, Level = kvp.Value });
        }

        // Call after loading
        public void SyncFromList()
        {
            SkillLevel = new Dictionary<TankSkillType, int>();
            foreach (var entry in skillLevels)
                SkillLevel[entry.SkillType] = entry.Level;
        }
    }
}