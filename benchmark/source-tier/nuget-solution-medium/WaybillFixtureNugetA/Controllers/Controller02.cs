using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetA.Controllers
{
    public sealed class Controller02
    {
        public string Route => "/api/" + typeof(Controller02).Name.ToLowerInvariant();
        public IReadOnlyList<string> AllowedMethods => new[] { "GET", "POST" };
        public string Describe() => $"{Route} handles {string.Join(',', AllowedMethods)}";
    }
}
