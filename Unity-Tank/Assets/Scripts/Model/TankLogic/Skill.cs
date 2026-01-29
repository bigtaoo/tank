using System.Linq;

namespace TankLogic
{
    internal class Skill
    {
        private readonly Main _main;
        private readonly SkillType _skillType;
        private readonly uint _skillLevel;
        private readonly uint _cooldownTime;
        private uint _effectTime;

        internal Skill(Main main, SkillType skillType, uint skillLevel)
        {
            _main = main;
            _skillType = skillType;
            _skillLevel = skillLevel;
            if (_skillLevel > 100)
            {
                _skillLevel = 100;
            }
            _cooldownTime = (130 - _skillLevel) * 1000;
            _effectTime = _main.GameTime + _cooldownTime;
        }

        internal void Update()
        {
            if (_main.GameTime > _effectTime)
            {
                _effectTime = _main.GameTime + _cooldownTime;
                SkillEffect();
            }
        }

        private void SkillEffect()
        {
            switch (_skillType)
            {
                case SkillType.LifeSkill:
                    {
                        var player = _main.PlayerManager.GetPlayer();
                        player.PlayerData.PlayerLifes++;
                        break;
                    }
                case SkillType.BombSkill:
                    {
                        var selectedRobot = _main.RobotManager.Robots.Values
                            .Where(r => _main.BuffManager.GetBuff(r.RobotId, BuffType.Invincible) == null)
                            .Take(3).ToList();
                        foreach (var robot in selectedRobot)
                        {
                            robot.OnRobotHit();
                        }
                        break;
                    }
                case SkillType.ShieldSkill:
                    {
                        var player = _main.PlayerManager.GetPlayer();
                        var buffData = new BuffData(_main.GetId(), player.PlayerId, BuffType.Invincible, 3000);
                        _main.BuffManager.AddBuff(buffData);

                        var effect = new Effect(_main.GetId(), player.PlayerId, player.PlayerData.CurrentPosition.Copy(),
                            EffectType.InvincibleShield,3000);
                        _main.EffectManager.AddClientEffect(effect);
                        break;
                    }
                case SkillType.TankLevelUpSkill:
                    {
                        var player = _main.PlayerManager.GetPlayer();
                        player.UpgradeTankLevel();
                        break;
                    }
                case SkillType.TimeStopSkill:
                    {
                        foreach (var robot in _main.RobotManager.Robots.Values)
                        {
                            var buffData = new BuffData(_main.GetId(), robot.RobotId, BuffType.CanNotMove, 3000);
                            _main.BuffManager.AddBuff(buffData);
                        }
                        break;
                    }
                case SkillType.WallUpgradeSkill:
                    {
                        _main.Headquarter.BaseWallsUpgrade();
                        break;
                    }
                default: break;
            }
        }
    }
}