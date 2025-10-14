using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    public static partial class TankUITankConfigSystem
    {
        private static void AwakeSkillConfig(this TankUITankConfigComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();

            self.SelectedSkillImage = rc.Get<GameObject>("SelectedSkillImage");
            self.SelectedSkillLevel = rc.Get<GameObject>("SelectedSkillLevel");

            self.LifeSkillBuy = rc.Get<GameObject>("LifeSkillBuy");
            self.LifeSkillDescription = rc.Get<GameObject>("LifeSkillDescription");
            self.LifeSkillPanel = rc.Get<GameObject>("LifeSkill");
        }

        private static void DisplaySkillInfo(this TankUITankConfigComponent self)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var selectedSkillType = savedFileComponent.UserInfo.SelectedSkillType;
            if (selectedSkillType == TankSkillType.None)
            {
                selectedSkillType = TankSkillType.LifeSkill;
            }
            self.SelectedSkillImage.GetComponent<Image>().sprite = AtlasManager.Instance.GetSprite(self.GetSkillSpriteName(selectedSkillType));

            if (savedFileComponent.UserInfo.SkillLevel == null)
            {
                savedFileComponent.UserInfo.SkillLevel = new System.Collections.Generic.Dictionary<TankSkillType, int>();
                savedFileComponent.UserInfo.SkillLevel[TankSkillType.LifeSkill] = 1;
            }
            if (!savedFileComponent.UserInfo.SkillLevel.TryGetValue(selectedSkillType, out var level))
            {
                level = 0;
            }
            self.SelectedSkillLevel.GetComponent<TMP_Text>().text = level.ToString();
        }

        private static string GetSkillSpriteName(this TankUITankConfigComponent self, TankSkillType skillType)
        {
            return skillType switch
            {
                TankSkillType.WallUpgradeSkill => "baseupgrad",
                TankSkillType.BombSkill => "bomb",
                TankSkillType.LifeSkill => "life",
                TankSkillType.TankUpgradeSkill => "levelup",
                TankSkillType.ShieldSkill => "shield",
                TankSkillType.TimeStopSkill => "timestoper",
                _ => "bomb",
            };
        }
    }
}