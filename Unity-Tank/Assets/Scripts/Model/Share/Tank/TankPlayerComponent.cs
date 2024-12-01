namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankPlayerComponent : Entity, IAwake, IUpdate
    {
        public TankPosition SpawnPosition { get; set; }
        public TankDirection MoveDirection { get; set; }
        public TankPosition Position { get; set; }
        public float MoveSpeed { get; set; }
        public int Rotation { get; set; }
        public long LastFrameTime { get; set; }
        public TankDirection CurrentDirection { get; set; } = TankDirection.Up;
    }
}