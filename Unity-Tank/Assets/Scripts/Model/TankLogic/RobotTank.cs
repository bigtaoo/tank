namespace TankLogic
{
    internal class RobotTank : Tank<RobotData>
    {
        private readonly Main _main;
        internal uint RobotId { get; private set; }
        internal RobotData RobotData { get; private set; }
        internal Position TargetPosition {get; set; }

        internal RobotTank(RobotData data, Main main, uint robotId) : base(data, main)
        {
            _main = main;
            RobotData = data;
            RobotId = robotId;
        }
    }
}