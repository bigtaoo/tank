using UnityEngine;

namespace ET.Client
{
    public static partial class TankUIGameMainSystem
    {
        private static void AwakeSkill(this TankUIGameMainComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.Skill = rc.Get<GameObject>("Skill");
            self.SkillCoolDown = rc.Get<GameObject>("SkillCoolDown");
        }
    }
}