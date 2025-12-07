namespace TankLogic
{
    public class InitializePlayerCommand : Command
    {
        internal Position SpwanPosition {get; private set; }

        public InitializePlayerCommand(int spwanX, int spwanY)
        {
            SpwanPosition = new Position(spwanX, spwanY);
        }
    }
}