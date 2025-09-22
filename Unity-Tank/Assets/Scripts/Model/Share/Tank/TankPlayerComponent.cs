namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankPlayerComponent : Entity, IAwake, IUpdate
    {
        public TankPosition SpawnPosition;
        public TankDirection MoveDirection;
        public TankPosition Position;
        public float MoveSpeed;
        public int Rotation;
        public long LastFrameTime;
        public TankDirection CurrentDirection = TankDirection.Up;
        public long LastShootTime;
        public long ShootCoolDownTime = 1000;
        public int PlayerLifes;
        public int TankLevel = 1;
    }
}