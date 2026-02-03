using TankLogic;

namespace ET
{
    public static class TankMovementHelper
    {
        public static int DirectionToRotation(Direction direction)
        {
            return direction switch
            {
                Direction.Left => 90,
                Direction.Right => 270,
                Direction.Up => 0,
                Direction.Down => 180,
                _ => 0,
            };
        }
    }
}