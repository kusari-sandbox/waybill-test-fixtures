using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetB.Handlers
{
    public sealed class Handler09
    {
        private readonly string _name;
        public Handler09(string name)
        {
            _name = name;
        }
        public Task<int> HandleAsync(int input)
        {
            return Task.FromResult(input + _name.Length);
        }
    }
}
