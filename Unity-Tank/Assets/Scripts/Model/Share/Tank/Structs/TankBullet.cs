namespace ET
{
    public struct TankBullet
    {
        public TankCamp Camp { get; set; }
        public TankPosition Position { get; set; }
        public TankDirection MoveDirection { get; set; }
        public float Speed { get; set; }
    }
}