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

            self.BombSkillBuy = rc.Get<GameObject>("BombSkillBuy");
            self.BombSkillDescription = rc.Get<GameObject>("BombSkillDescription");
            self.BombSkillPanel = rc.Get<GameObject>("BombSkill");
            self.BombSkillBuy.GetComponent<Button>().onClick.AddListener(() => self.ProcessBuySkill(TankSkillType.BombSkill));
            self.BombSkillPanel.GetComponent<ClickEvent>().OnClick = () => self.UpdateSelectedSkill(TankSkillType.BombSkill);

            self.ShieldSkillBuy = rc.Get<GameObject>("ShieldSkillBuy");
            self.ShieldSkillDescription = rc.Get<GameObject>("ShieldSkillDescription");
            self.ShieldSkillPanel = rc.Get<GameObject>("ShieldSkill");
            self.ShieldSkillBuy.GetComponent<Button>().onClick.AddListener(() => self.ProcessBuySkill(TankSkillType.ShieldSkill));
            self.ShieldSkillPanel.GetComponent<ClickEvent>().OnClick = () => self.UpdateSelectedSkill(TankSkillType.ShieldSkill);

            self.TimeStopSkillBuy = rc.Get<GameObject>("TimeStopSkillBuy");
            self.TimeStopSkillDescription = rc.Get<GameObject>("TimeStopSkillDescription");
            self.TimeStopSkillPanel = rc.Get<GameObject>("TimeStopSkill");
            self.TimeStopSkillBuy.GetComponent<Button>().onClick.AddListener(() => self.ProcessBuySkill(TankSkillType.TimeStopSkill));
            self.TimeStopSkillPanel.GetComponent<ClickEvent>().OnClick = () => self.UpdateSelectedSkill(TankSkillType.TimeStopSkill);

            self.TankLevelUpSkillBuy = rc.Get<GameObject>("TankLevelUpSkillBuy");
            self.TankLevelUpSkillDescription = rc.Get<GameObject>("TankLevelUpSkillDescription");
            self.TankLevelUpSkillPanel = rc.Get<GameObject>("TankLevelUpSkill");
            self.TankLevelUpSkillBuy.GetComponent<Button>().onClick.AddListener(() => self.ProcessBuySkill(TankSkillType.TankLevelUpSkill));
            self.TankLevelUpSkillPanel.GetComponent<ClickEvent>().OnClick = () => self.UpdateSelectedSkill(TankSkillType.TankLevelUpSkill);

            self.WallUpgradeSkillBuy = rc.Get<GameObject>("WallUpgradeSkillBuy");
            self.WallUpgradeSkillDescription = rc.Get<GameObject>("WallUpgradeSkillDescription");
            self.WallUpgradeSkillPanel = rc.Get<GameObject>("WallUpgradeSkill");
            self.WallUpgradeSkillBuy.GetComponent<Button>().onClick.AddListener(() => self.ProcessBuySkill(TankSkillType.WallUpgradeSkill));
            self.WallUpgradeSkillPanel.GetComponent<ClickEvent>().OnClick = () => self.UpdateSelectedSkill(TankSkillType.WallUpgradeSkill);
        }

        private static void DisplaySkillInfo(this TankUITankConfigComponent self)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            var selectedSkillType = savedFileComponent.UserInfo.SelectedSkillType;
            if (selectedSkillType == TankSkillType.None)
            {
                selectedSkillType = TankSkillType.LifeSkill;
            }
            self.SelectedSkillImage.GetComponent<Image>().sprite = AtlasManager.Instance.GetSprite(TankHelper.GetSkillSpriteName(selectedSkillType));

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
            SoundManager.Instance.PlayButtonClick();

            var skillPrice = 50;
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            if (savedFileComponent.UserInfo.Gold < skillPrice)
            {
                Log.Warning($"Don't have enough money to buy the skill. Current money is {savedFileComponent.UserInfo.Gold}");
                return;
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
            if (tankSkill.SkillLevel >= 100)
            {
                Log.Warning("Already upgraded to the maximum level!");
                return;
            }

            // Log.Warning($"current skill level: {tankSkill.SkillLevel}");
            savedFileComponent.UserInfo.Gold -= skillPrice;
            tankSkill.SkillLevel++;
            savedFileComponent.UserInfo.SelectedSkillType = skillType;

            self.DisplaySkillInfo();
            savedFileComponent.SaveTankConfigResult();
        }

        private static void UpdateSelectedSkill(this TankUITankConfigComponent self, TankSkillType skillType)
        {
            SoundManager.Instance.PlayButtonClick();
            
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            savedFileComponent.UserInfo.SelectedSkillType = skillType;

            self.DisplaySkillInfo();
            savedFileComponent.SaveTankConfigResult();
        }

        private static TankSkillTimeUpdater GetTankSkillTimeUpdater(this TankUITankConfigComponent self, TankSkillType skillType)
        {
            return skillType switch
            {
                TankSkillType.LifeSkill => self.LifeSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                TankSkillType.BombSkill => self.BombSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                TankSkillType.ShieldSkill => self.ShieldSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                TankSkillType.TimeStopSkill => self.TimeStopSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                TankSkillType.TankLevelUpSkill => self.TankLevelUpSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                TankSkillType.WallUpgradeSkill => self.WallUpgradeSkillDescription.GetComponent<TankSkillTimeUpdater>(),
                _ => null,
            };
        }
    }
}