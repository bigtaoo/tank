namespace TankLogic
{
    public abstract class Tank<TData> where TData: TankData
    {
        protected TData tankData;

        protected Tank(TData data)
        {
            tankData = data;
        }

        public void Move()
        {
            
        }
    }
}