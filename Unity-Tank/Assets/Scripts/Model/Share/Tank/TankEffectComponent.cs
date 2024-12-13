namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class TankEffectComponent : Entity, IAwake
    {
        public ListComponent<TankEffect> ExplosionEffects { get; set; } = new ListComponent<TankEffect> ();
    }
}