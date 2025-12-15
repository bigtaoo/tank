namespace TankLogic
{
    public class MoveCommand : Command
    {
        public Direction Direction { get; private set; }

        public MoveCommand(Direction direction)
        {
            Direction = direction;
        }
    }
}
