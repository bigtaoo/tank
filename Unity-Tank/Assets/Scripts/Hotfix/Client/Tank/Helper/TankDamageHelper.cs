namespace ET
{
    public static class TankDamageHelper
    {
        public static bool BulletHitTank(TankPosition bulletPosition, TankPosition tankPosition)
        {
            //Log.Warning($"bullet x {bulletPosition.X} y {bulletPosition.Y} tank x {tankPosition.X} y {tankPosition.Y}");
            return bulletPosition.X < tankPosition.X + 1 && bulletPosition.X > tankPosition.X - 1 &&
                bulletPosition.Y > tankPosition.Y - 1 && bulletPosition.Y < tankPosition.Y + 1;
        }
    }
}