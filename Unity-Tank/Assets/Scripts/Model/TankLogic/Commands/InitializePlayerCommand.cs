namespace TankLogic
{
    public class InitializePlayerCommand : Command
    {
        internal Position SpwanPosition { get; private set; }
        internal int MoveSpeed { get; private set; }
        internal uint ShootCoolDownTime { get; private set; }
        internal int BulletMoveSpeed { get; private set; }

        public InitializePlayerCommand(int spwanX, int spwanY, int moveSpeed, uint shootCoolDownTime, int bulletMoveSpeed)
        {
            SpwanPosition = new Position(spwanX, spwanY);
            MoveSpeed = moveSpeed;
            ShootCoolDownTime = shootCoolDownTime;
            BulletMoveSpeed = bulletMoveSpeed;
        }
    }
}