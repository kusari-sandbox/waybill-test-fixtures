using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetD.Handlers
{
    public sealed class Handler02
    {
        private readonly string _name;
        public Handler02(string name)
        {
            _name = name;
        }
        public Task<int> HandleAsync(int input)
        {
            return Task.FromResult(input + _name.Length);
        }
    }
}
