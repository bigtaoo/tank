namespace TankLogic
{
    public sealed class ShootCommand : Command
    {
        public ShootCommand(uint frame)
        {
            Frame = frame;
        }
    }
}
