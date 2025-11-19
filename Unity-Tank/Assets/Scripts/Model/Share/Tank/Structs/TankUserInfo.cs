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
        public List<TankSkill> SkillLevels = new();
        public int MusicVolume = 1000;
        public int SoundVolume = 1000;
        public TankJoyStickerType JoyStickerType;
    }
}