namespace TankLogic
{
    public class Main
    {
        public RobotManager RobotManager{ get; private set; }
        public PlayerManager PlayerManager{ get; private set; }

        public Main(int seed)
        {
            RobotManager = new RobotManager(this);
            PlayerManager = new PlayerManager(this);
        }
    }
}