using System;

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
                PlayerData.MoveDirection = Direction.None;

                var spawnBuff = new Buff(_main.GetId(), PlayerId, BuffType.Spwan, 1000);
                _main.BuffManager.AddBuff(spawnBuff);
                var invincibleBuff = new Buff(_main.GetId(), PlayerId, BuffType.Invincible, 3000);
                _main.BuffManager.AddBuff(invincibleBuff);

                var effect = new Effect(_main.GetId(), PlayerId, EffectType.InvincibleShield, 3000);
                _main.EffectManager.AddEffect(effect);
            }
        }

        private void AdjustStopPosition()
        {
            if (_tankData.MoveDirection != Direction.None)
            {
                return;
            }

            if (_tankData.CurrentDirection == Direction.Up || _tankData.CurrentDirection == Direction.Down)
            {
                var position = _tankData.CurrentPosition;
                position.Y = PositionToTile(_tankData.CurrentDirection, _tankData.CurrentPosition.Y);
                //Log.Warning($"Ajust Y: current Y: {self.Position.Y}, target Y: {position.Y}");
                if (position.Y != _tankData.CurrentPosition.Y)
                {
                    var time = Math.Abs(position.Y - _tankData.CurrentPosition.Y) * 1000 / _tankData.MoveSpeed / 2;
                    //Log.Warning($"Player tank tween time: {time}, t: {position.Y}, c:{self.Position.Y}, s: {self.MoveSpeed}");
                    var buff = new Buff(_main.GetId(), PlayerId, BuffType.AddTween, (uint)time);
                    _main.BuffManager.AddBuff(buff);

                    _tankData.CurrentPosition = position;
                }
            }
            else if (_tankData.CurrentDirection == Direction.Left || _tankData.CurrentDirection == Direction.Right)
            {
                var position = _tankData.CurrentPosition;
                position.X = PositionToTile(_tankData.CurrentDirection, _tankData.CurrentPosition.X);
                if (position.X != _tankData.CurrentPosition.X)
                {
                    var time = Math.Abs(position.X - _tankData.CurrentPosition.X) * 1000 / _tankData.MoveSpeed / 2;
                    var buff = new Buff(_main.GetId(), PlayerId, BuffType.AddTween, (uint)time);
                    _main.BuffManager.AddBuff(buff);

                    _tankData.CurrentPosition = position;
                }
            }
        }
    }
}