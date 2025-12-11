using System;

namespace TankLogic
{
    public interface ILogger
    {
        void Warning(string message);
        void Info(string message);
        void Error(Exception e);
    }
}