using System.Collections.Generic;

namespace ET
{

    [EnableClass]
    [System.Serializable]
    public class TestClass
    {
        public int Key;
        public int Value;
    }
        
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
        public List<int> Tests = new();
        public List<TestClass> TestClasses = new();
    }
}