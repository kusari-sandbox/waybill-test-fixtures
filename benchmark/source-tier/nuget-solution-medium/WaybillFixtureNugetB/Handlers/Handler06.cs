using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetB.Handlers
{
    public sealed class Handler06
    {
        private readonly string _name;
        public Handler06(string name)
        {
            _name = name;
        }
        public Task<int> HandleAsync(int input)
        {
            return Task.FromResult(input + _name.Length);
        }
    }
}
