using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetD.Controllers
{
    public sealed class Controller01
    {
        public string Route => "/api/" + typeof(Controller01).Name.ToLowerInvariant();
        public IReadOnlyList<string> AllowedMethods => new[] { "GET", "POST" };
        public string Describe() => $"{Route} handles {string.Join(',', AllowedMethods)}";
    }
}
