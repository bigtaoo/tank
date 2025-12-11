using System;
using TankLogic;

namespace ET
{
    [EnableClass]
    public class TankLogicUnityLogger : ILogger
    {

        public void Error(Exception e)
        {
            UnityEngine.Debug.LogException(e);
        }

        public void Info(string message)
        {
            UnityEngine.Debug.Log(message);
        }

        public void Warning(string message)
        {
            UnityEngine.Debug.LogWarning(message);
        }
    }
}