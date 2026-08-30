using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetA.Handlers
{
    public sealed class Handler01
    {
        private readonly string _name;
        public Handler01(string name)
        {
            _name = name;
        }
        public Task<int> HandleAsync(int input)
        {
            return Task.FromResult(input + _name.Length);
        }
    }
}
