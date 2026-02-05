using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    public static partial class TankUIGameMainSystem
    {
        private static void AwakeSkill(this TankUIGameMainComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.Skill = rc.Get<GameObject>("Skill");
            self.SkillCoolDown = rc.Get<GameObject>("SkillCoolDown");

            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var skillType = savedFileComponent.UserInfo.SelectedSkillType;
            var skillLevel = savedFileComponent.GetSkillLevel(skillType);
            self.SkillCoolDownTimeMS = (TankConsts.SkillInitialTime - skillLevel) * 1000;
            self.SkillCoolUpTimeMS = TimeInfo.Instance.ClientFrameTime();

            self.Skill.GetComponent<Image>().sprite = AtlasManager.Instance.GetSprite(TankHelper.GetSkillSpriteName(skillType));

            // var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
            // playerComponent.TankSkill = new TankSkill { SkillType = skillType, SkillLevel = skillLevel };
        }

        private static void UpdateSkill(this TankUIGameMainComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            if (currentTime - self.SkillCoolUpTimeMS > self.SkillCoolDownTimeMS)
            {
                self.SkillCoolUpTimeMS = currentTime;
            }
            else
            {
                float t = (float)(currentTime - self.SkillCoolUpTimeMS) / self.SkillCoolDownTimeMS;
                var cooldownImage = self.SkillCoolDown.GetComponent<Image>();
                cooldownImage.fillAmount = 1 - t;
            }
        }
    }
}