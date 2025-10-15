using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(UI))]
    public class TankUITankConfigComponent : Entity, IAwake
    {
        public GameObject Back;

        public GameObject GoldInfo;

        public GameObject MoveSpeedValue;
        public GameObject MoveSpeedBuy;
        public GameObject BulletSpeedValue;
        public GameObject BulletSpeedBuy;
        public GameObject ShootSpeedValue;
        public GameObject ShootSpeedBuy;
        public GameObject MoveSpeedMaxLevel;
        public GameObject BulletSpeedMaxLevel;
        public GameObject ShootSpeedMaxLevel;

        public GameObject MoveSpeedLevel;
        public GameObject BulletSpeedLevel;
        public GameObject ShootSpeedLevel;
        public GameObject SelectedSkillImage;
        public GameObject SelectedSkillLevel;

        public GameObject LifeSkillPanel;
        public GameObject LifeSkillBuy;
        public GameObject LifeSkillDescription;
        public GameObject BombSkillPanel;
        public GameObject BombSkillBuy;
        public GameObject BombSkillDescription;
        public GameObject ShieldSkillPanel;
        public GameObject ShieldSkillBuy;
        public GameObject ShieldSkillDescription;
        public GameObject TimeStopSkillPanel;
        public GameObject TimeStopSkillBuy;
        public GameObject TimeStopSkillDescription;
        public GameObject TankLevelUpSkillPanel;
        public GameObject TankLevelUpSkillBuy;
        public GameObject TankLevelUpSkillDescription;
        public GameObject WallUpgradeSkillPanel;
        public GameObject WallUpgradeSkillBuy;
        public GameObject WallUpgradeSkillDescription;
    }
}