namespace TankLogic
{
    internal class SkillManager
    {
        private readonly Main _main;
        private Skill _skill;

        internal SkillManager(Main main)
        {
            _main = main;
        }

        internal void InitializeSkill(SkillType skillType, uint level)
        {
            _skill = new Skill(_main, skillType, level);
        }

        internal void UpdateSkill()
        {
            _skill?.Update();
        }
    }
}