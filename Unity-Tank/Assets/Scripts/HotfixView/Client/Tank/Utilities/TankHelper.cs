namespace ET
{
    public static class TankHelper
    {
        public static float TankDirectionToRotation(TankDirection direction)
        {
            switch (direction)
            {
                case TankDirection.Left: return 90.0f;
                case TankDirection.Right: return 270.0f;
                case TankDirection.Up: return 0.0f;
                case TankDirection.Down: return 180.0f;
                default: return 0.0f;
            }
        }
    }
}