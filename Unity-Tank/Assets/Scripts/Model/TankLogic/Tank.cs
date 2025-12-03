namespace TankLogic
{
    internal abstract class Tank<TData> where TData: TankData
    {
        protected TData _tankData;
        private readonly Main _main;

        protected Tank(TData data, Main main)
        {
            _tankData = data;
            _main = main;
        }

        public void SetMoveDirection(Direction moveDirection)
        {
            if (moveDirection != Direction.None)
            {
                _tankData.CurrentDirection = moveDirection;
            }

            _tankData.MoveDirection = moveDirection;
        }

        public void Move()
        {
            
        }
    }
}