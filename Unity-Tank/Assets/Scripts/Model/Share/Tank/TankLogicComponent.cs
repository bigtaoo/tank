using TankLogic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankLogicComponent : Entity, IAwake, IUpdate
    {
        public Main tankLogic;
    }
}