namespace ET
{
    public static class TankHelper
    {
        public static float TankDirectionToRotation(TankDirection direction)
        {
            switch (direction)
            {
                case TankDirection.Left: return 90.0f;
                case TankDirection.Right: return 270.0f;
                case TankDirection.Up: return 0.0f;
                case TankDirection.Down: return 180.0f;
                default: return 0.0f;
            }
        }

        public static string GetSkillSpriteName(TankSkillType skillType)
        {
            return skillType switch
            {
                TankSkillType.WallUpgradeSkill => "baseupgrad",
                TankSkillType.BombSkill => "bomb",
                TankSkillType.LifeSkill => "life",
                TankSkillType.TankLevelUpSkill => "levelup",
                TankSkillType.ShieldSkill => "shield",
                TankSkillType.TimeStopSkill => "timestoper",
                _ => "bomb",
            };
        }
    }
}