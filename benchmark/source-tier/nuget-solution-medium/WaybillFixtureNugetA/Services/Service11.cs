using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetA.Services
{
    public sealed class Service11
    {
        private readonly Dictionary<string, int> _counts = new();
        public int Register(string key)
        {
            if (!_counts.ContainsKey(key)) _counts[key] = 0;
            _counts[key]++;
            return _counts[key];
        }
        public int Get(string key) => _counts.TryGetValue(key, out var v) ? v : 0;
    }
}
