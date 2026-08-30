using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetB.Handlers
{
    public sealed class Handler10
    {
        private readonly string _name;
        public Handler10(string name)
        {
            _name = name;
        }
        public Task<int> HandleAsync(int input)
        {
            return Task.FromResult(input + _name.Length);
        }
    }
}
