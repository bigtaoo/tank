namespace TankLogic
{
    public class MoveCommand : Command
    {
        public Direction Direction { get; private set; }

        public MoveCommand(uint frame, Direction direction)
        {
            Frame = frame;
            Direction = direction;
        }
    }
}
