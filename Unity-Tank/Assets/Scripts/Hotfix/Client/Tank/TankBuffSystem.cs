namespace ET
{
    [EntitySystemOf(typeof(TankBuffComponent))]
    [FriendOf(typeof(TankBuffComponent))]
    public static partial class TankBuffSystem
    {
        [EntitySystem]
        private static void Awake(this TankBuffComponent self)
        {

        }

        [EntitySystem]
        private static void Update(this TankBuffComponent self)
        {
            var currentTime = TimeInfo.Instance.ClientFrameTime();
            foreach(var tankBuff in self.TankBuffs.Values)
            {
                for (var i = tankBuff.Count - 1; i >= 0; i--)
                {
                    var buff = tankBuff[i];
                    if (buff.RemoveTime >  currentTime)
                    {
                        tankBuff.RemoveAt(i);
                    }
                }
            }
        }

        public static void AddBuff(this TankBuffComponent self, int TankId, TankBuffType type, long persistTime) 
        {
            if (!self.TankBuffs.ContainsKey(TankId))
            {
                self.TankBuffs[TankId] = new ListComponent<TankBuff>();
            }

            var tankBuff = self.TankBuffs[TankId];
            foreach (var buff in tankBuff)
            {
                if (buff.Type == type)
                {
                    buff.RemoveTime = TimeInfo.Instance.ClientFrameTime() + persistTime;
                    return;
                }
            }

            var newBuff = new TankBuff
            {
                Type = type,
                RemoveTime = TimeInfo.Instance.ClientFrameTime() + persistTime,
            };
            tankBuff.Add(newBuff);
        }

        public static void RemoveBuff(this TankBuffComponent self, int TankId, TankBuffType type)
        {
            if (self.TankBuffs.TryGetValue(TankId, out var buffList))
            {
                foreach (var buff in buffList)
                {
                    if (buff.Type == type)
                    {
                        buffList.Remove(buff);
                        break;
                    }
                }
            }
        }

        public static void OnTankDestroyed(this TankBuffComponent self, int TankId)
        {
            if (self.TankBuffs.ContainsKey(TankId))
            {
                self.TankBuffs.Remove(TankId);
            }
        }
    }
}