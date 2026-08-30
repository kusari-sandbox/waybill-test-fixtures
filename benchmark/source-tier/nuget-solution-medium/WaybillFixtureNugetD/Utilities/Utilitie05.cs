using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetD.Utilities
{
    public static class Utilitie05
    {
        public static string Slugify(string value)
        {
            return (value ?? string.Empty).ToLowerInvariant().Replace(' ', '-');
        }
        public static int SafeParse(string value, int fallback)
        {
            return int.TryParse(value, out var v) ? v : fallback;
        }
    }
}
