namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankPlayerComponent : Entity, IAwake
    {
        public TankPosition SpawnPosition { get; set; }
        public TankDirection MoveDirection { get; set; }
        public TankPosition Position { get; set; }
        public float MoveSpeed { get; set; }
        public float BulletSpeed { get; set; }
        public int Rotation;
        public long LastFrameTime;
        public TankDirection CurrentDirection = TankDirection.Up;
        public long LastShootTime;
        public long ShootCoolDownTime { get; set; }= 1000;
        public int PlayerLifes;
        public uint TankLevel = 1;
        public bool UpdateSprite = false;
    }
}