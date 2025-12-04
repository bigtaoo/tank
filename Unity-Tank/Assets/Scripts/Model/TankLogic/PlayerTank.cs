namespace TankLogic
{
    internal class PlayerTank : Tank<PlayerData>
    {
        private readonly Main _main;
        internal uint PlayerId { get; private set; }
        internal PlayerData PlayerData { get; private set; }

        internal PlayerTank(PlayerData playerData, Main main, uint tankId) : base(playerData, main)
        {
            PlayerData = playerData;
            _main = main;
            PlayerId = tankId;
        }

        private void CheckHelth()
        {
            if (PlayerData.PlayerLifes <= 0)
            {
                return;
            }
            if (PlayerData.Level <= 0)
            {
                PlayerData.Level = 1;
                --PlayerData.PlayerLifes;
                PlayerData.CurrentPosition = PlayerData.SpawnPosition;
                PlayerData.Rotation = 0;
                PlayerData.MoveDirection = Direction.None;

                var spawnBuff = new Buff(_main.GetId(), PlayerId, BuffType.Spwan, 1000);
                _main.BuffManager.AddBuff(spawnBuff);
                var invincibleBuff = new Buff(_main.GetId(), PlayerId, BuffType.Invincible, 3000);
                _main.BuffManager.AddBuff(invincibleBuff);

                var effect = new Effect(_main.GetId(), PlayerId, EffectType.InvincibleShield, 3000);
                _main.EffectManager.AddEffect(effect);
            }
        }
    }
}