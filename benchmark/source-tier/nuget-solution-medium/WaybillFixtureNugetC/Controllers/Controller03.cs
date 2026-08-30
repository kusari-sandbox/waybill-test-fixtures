using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetC.Controllers
{
    public sealed class Controller03
    {
        public string Route => "/api/" + typeof(Controller03).Name.ToLowerInvariant();
        public IReadOnlyList<string> AllowedMethods => new[] { "GET", "POST" };
        public string Describe() => $"{Route} handles {string.Join(',', AllowedMethods)}";
    }
}
