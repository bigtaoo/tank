using System.Linq;
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
        }

        private static void UpdateSkill(this TankUIGameMainComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            if (currentTime - self.SkillCoolUpTimeMS > self.SkillCoolDownTimeMS)
            {
                self.SkillEffect();
                self.SkillCoolUpTimeMS = currentTime;
            }
            else
            {
                float t = (float)(currentTime - self.SkillCoolUpTimeMS) / self.SkillCoolDownTimeMS;
                var cooldownImage = self.SkillCoolDown.GetComponent<Image>();
                cooldownImage.fillAmount = 1 - t;
            }
        }
        
        private static void SkillEffect(this TankUIGameMainComponent self)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var skillType = savedFileComponent.UserInfo.SelectedSkillType;

            switch (skillType)
            {
                case TankSkillType.LifeSkill:
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        playerComponent.UpdatePlayerLifes(1);
                        break;
                    }
                case TankSkillType.BombSkill:
                    {
                        // var robotComponent = self.Root().GetComponent<TankRobotComponent>();
                        // var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        // var selectedRobot = robotComponent.Robots.Values.Where(r => buffComponent.GetBuff(r.RobotId, TankBuffType.Invincible) == null)
                        //     .Take(3).ToList();
                        // foreach (var robot in selectedRobot)
                        // {
                        //     robot.Level = 0;
                        // }
                        break;
                    }
                case TankSkillType.ShieldSkill:
                    {
                        var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        buffComponent.AddBuff(TankConsts.PlayerIndex, TankBuffType.Invincible, 3000);
                        var attachedEffectComponent = self.Root().GetComponent<TankAttachedEffectComponent>();
                        // attachedEffectComponent.AddAttachedEffect(TankAttachedEffectType.InvincibleShield, 3000, null, true);
                        break;
                    }
                case TankSkillType.TankLevelUpSkill:
                    {
                        var playerComponent = self.Root().GetComponent<TankPlayerComponent>();
                        playerComponent.UpdatePlayerTankLevel(1);
                        break;
                    }
                case TankSkillType.TimeStopSkill:
                    {
                        // var robotComponent = self.Root().GetComponent<TankRobotComponent>();
                        // var buffComponent = self.Root().GetComponent<TankBuffComponent>();
                        // foreach (var robot in robotComponent.Robots.Values)
                        // {
                        //     buffComponent.AddBuff(robot.RobotId, TankBuffType.CanNotMove, 3000);
                        // }
                        break;
                    }
                case TankSkillType.WallUpgradeSkill:
                    {
                        var baseComponent = self.Root().GetComponent<TankBaseComponent>();
                        baseComponent.UpgradeBaseWalls();
                        break;
                    }
                default: break;
            }
        }
    }
}