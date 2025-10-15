using System;
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
            self.LifeSkillBuy.GetComponent<Button>().onClick.AddListener(() => self.ProcessBuySkill(TankSkillType.LifeSkill));
            self.LifeSkillPanel.GetComponent<ClickEvent>().OnClick = () => self.UpdateSelectedSkill(TankSkillType.LifeSkill);
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

            self.SelectedSkillLevel.GetComponent<TMP_Text>().text = savedFileComponent.GetSkillLevel(selectedSkillType).ToString();

            foreach (TankSkillType skill in Enum.GetValues(typeof(TankSkillType)))
            {
                var skillLevel = savedFileComponent.GetSkillLevel(skill);
                if (skillLevel > 0)
                {
                    var skillTime = TankConsts.SkillInitialTime - skillLevel;
                    var timeUpdater = self.GetTankSkillTimeUpdater(skill);
                    if (timeUpdater != null)
                    {
                        timeUpdater.UpdateSkillTime(skillTime);
                    }
                }
            }
        }

        private static void ProcessBuySkill(this TankUITankConfigComponent self, TankSkillType skillType)
        {
            var skillPrice = 50;
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            if (savedFileComponent.UserInfo.Gold < skillPrice)
            {
                Log.Warning($"Don't have enough money to buy the skill. Current money is {savedFileComponent.UserInfo.Gold}");
            }
            TankSkill tankSkill = null;
            foreach (var skill in savedFileComponent.UserInfo.SkillLevels)
            {
                if (skill.SkillType == skillType)
                {
                    tankSkill = skill;
                    break;
                }
            }
            if (tankSkill == null)
            {
                tankSkill = new TankSkill
                {
                    SkillType = skillType,
                    SkillLevel = 0,
                };
                savedFileComponent.UserInfo.SkillLevels.Add(tankSkill);
            }

            Log.Warning($"current skill level: {tankSkill.SkillLevel}");
            savedFileComponent.UserInfo.Gold -= skillPrice;
            tankSkill.SkillLevel++;
            savedFileComponent.UserInfo.SelectedSkillType = skillType;

            self.DisplaySkillInfo();
            savedFileComponent.SaveTankConfigResult();
        }

        private static void UpdateSelectedSkill(this TankUITankConfigComponent self, TankSkillType skillType)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            savedFileComponent.UserInfo.SelectedSkillType = skillType;

            self.DisplaySkillInfo();
            savedFileComponent.SaveTankConfigResult();
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

        private static TankSkillTimeUpdater GetTankSkillTimeUpdater(this TankUITankConfigComponent self, TankSkillType skillType)
        {
            return skillType switch
            {
                TankSkillType.LifeSkill => self.LifeSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                _ => null,
            };
        }
    }
}