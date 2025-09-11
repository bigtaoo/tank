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
                    if (buff.RemoveTime <  currentTime)
                    {
                        Log.Info($"Remove buff: {buff.Type}");
                        tankBuff.RemoveAt(i);
                    }
                }
            }
        }

        public static void AddBuff(this TankBuffComponent self, int TankId, TankBuffType type, long persistTimeMS) 
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
                    buff.RemoveTime = TimeInfo.Instance.ClientFrameTime() + persistTimeMS;
                    return;
                }
            }

            var newBuff = new TankBuff
            {
                Type = type,
                RemoveTime = TimeInfo.Instance.ClientFrameTime() + persistTimeMS,
            };

            if (type == TankBuffType.Invincible)
            {
                
            }

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

        public static TankBuff GetBuff(this TankBuffComponent self, int TankId, TankBuffType type)
        {
            if (self.TankBuffs.TryGetValue(TankId, out var buffList))
            {
                foreach (var buff in buffList)
                {
                    if (buff.Type == type)
                    {
                        return buff;
                    }
                }
            }
            return null;
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