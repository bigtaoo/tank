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

        internal void Update()
        {
            AdjustStopPosition();
        }

        internal void PlayerShoot()
        {
            var currentTime = _main.GameTime;
            if (currentTime - _tankData.LastShootTime < _tankData.ShootCoolDownTime)
            {
                return;
            }
            _tankData.LastShootTime = currentTime;

            var bulletData = new BulletData(Camp.Player, _tankData.CurrentDirection, _tankData.CurrentPosition.Copy(), _tankData.BulletSpeed, 1);
            _main.BulletManager.AddBullet(bulletData);
        }

        internal void UpdatePlayerPosition()
        {
            if (_tankData.MoveDirection == Direction.None)
            {
                return;
            }

            var distance = (int)(_tankData.MoveSpeed * Main.FrameTime / 1000);
            var position = Move(distance);

            if (CanTankMoveToPosition(position.X, position.Y, _tankData.CurrentDirection) &&
                !PositionHasTank(position.Copy(), _tankData.CurrentDirection, PlayerId))
            {
                _tankData.CurrentPosition = position;
            }
            // Log.Warning($"Move distance: {distance}, X: {position.X}, Y: {position.Y}");
        }

        internal void OnPlayerHit()
        {
            --PlayerData.Level;
            if (PlayerData.Level <= 0)
            {
                PlayerData.Level = 1;
                --PlayerData.PlayerLifes;
                PlayerData.CurrentPosition = PlayerData.SpawnPosition;
                PlayerData.MoveDirection = Direction.None;

                var spawnBuff = new BuffData(_main.GetId(), PlayerId, BuffType.Spwan, 1000);
                _main.BuffManager.AddBuff(spawnBuff);
                var invincibleBuff = new BuffData(_main.GetId(), PlayerId, BuffType.Invincible, 3000);
                _main.BuffManager.AddBuff(invincibleBuff);

                var effect = new Effect(_main.GetId(), PlayerId, PlayerData.CurrentPosition, EffectType.InvincibleShield, 3000);
                _main.EffectManager.AddClientEffect(effect);
            }
            if (PlayerData.PlayerLifes <= 0)
            {
                _main.SetGameOver(GameResultType.Lose);
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
                var targetY = PositionToTile(_tankData.CurrentDirection, _tankData.CurrentPosition.Y) * 1000;
                //Log.Warning($"Ajust Y: current Y: {self.Position.Y}, target Y: {position.Y}");
                if (position.Y != targetY)
                {
                    var dis = (int)(_tankData.MoveSpeed * 2 * Main.FrameTime / 1000);
                    if (Math.Abs(position.Y - targetY) < dis)
                    {
                        _tankData.CurrentPosition.Y = targetY;
                    }
                    else
                    {
                        if (_tankData.CurrentDirection == Direction.Up)
                        {
                            _tankData.CurrentPosition.Y += dis;
                        }
                        else
                        {
                            _tankData.CurrentPosition.Y -= dis;
                        }
                    }
                }
            }
            else if (_tankData.CurrentDirection == Direction.Left || _tankData.CurrentDirection == Direction.Right)
            {
                var position = _tankData.CurrentPosition;
                var targetX = PositionToTile(_tankData.CurrentDirection, _tankData.CurrentPosition.X) * 1000;
                if (position.X != targetX)
                {
                    var dis = (int)(_tankData.MoveSpeed * 2 * Main.FrameTime / 1000);
                    if (Math.Abs(position.X - targetX) < dis)
                    {
                        _tankData.CurrentPosition.X = targetX;
                    }
                    else
                    {
                        if (_tankData.CurrentDirection == Direction.Left)
                        {
                            _tankData.CurrentPosition.X -= dis;
                        }
                        else
                        {
                            _tankData.CurrentPosition.X += dis;
                        }
                    }
                }
            }
        }
    
        internal void UpgradeTankLevel()
        {
            PlayerData.Level++;
            if (PlayerData.Level > 3)
            {
                PlayerData.Level = 3;
            }
        }
    }
}