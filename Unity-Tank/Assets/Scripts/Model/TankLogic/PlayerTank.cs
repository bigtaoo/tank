namespace TankLogic
{
    internal class PlayerTank : Tank<PlayerData>
    {
        private readonly PlayerData _playerData;
        private readonly Main _main;
        private uint _tankId;

        internal PlayerTank(PlayerData playerData, Main main, uint tankId) : base(playerData, main)
        {
            _playerData = playerData;
            _main = main;
            _tankId = tankId;
        }

        private void CheckHelth()
        {
            if (_playerData.PlayerLifes <= 0)
            {
                return;
            }
            if (_playerData.Level <= 0)
            {
                _playerData.Level = 1;
                --_playerData.PlayerLifes;
                _playerData.CurrentPosition = _playerData.SpawnPosition;
                _playerData.Rotation = 0;
                _playerData.MoveDirection = Direction.None;

                var spawnBuff = new Buff(_main.GetId(), _tankId, BuffType.Spwan, 1000);
                _main.BuffManager.AddBuff(spawnBuff);
                var invincibleBuff = new Buff(_main.GetId(), _tankId, BuffType.Invincible, 3000);
                _main.BuffManager.AddBuff(invincibleBuff);

                var effect = new Effect(_main.GetId(), _tankId, EffectType.InvincibleShield, 3000);
                _main.EffectManager.AddEffect(effect);
            }
        }
    }
}