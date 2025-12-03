namespace TankLogic
{
    internal class RandomGenerator
    {
        private ulong _state0;
        private ulong _state1;

        internal RandomGenerator(ulong seed)
        {
            _state0 = SplitMix64(ref seed);
            _state1 = SplitMix64(ref seed);
        }
        
        private ulong NextULongCore()
        {
            ulong s1 = _state0;
            ulong s0 = _state1;

            _state0 = s0;
            s1 ^= s1 << 23;
            s1 ^= s1 >> 17;
            s1 ^= s0;
            s1 ^= s0 >> 26;

            _state1 = s1;

            return _state0 + _state1;
        }

        private static ulong SplitMix64(ref ulong x)
        {
            x += 0x9E3779B97F4A7C15;
            ulong z = x;
            z = (z ^ (z >> 30)) * 0xBF58476D1CE4E5B9UL;
            z = (z ^ (z >> 27)) * 0x94D049BB133111EBUL;
            return z ^ (z >> 31);
        }

        public int RandomInt()
        {
            return (int)(NextULongCore() & 0x7FFFFFFF);
        }

        public int RandomInt(int max)
        {
            if (max <= 0)
            {
                return 0;
            }

            return (int)(NextULongCore() % (ulong)max);
        }

        public int RandomInt(int min, int max)
        {
            if (min >= max) 
            {
                return min;
            }

            ulong range = (ulong)(max - min);
            return (int)((NextULongCore() % range) + (ulong)min);
        }
    }
}
