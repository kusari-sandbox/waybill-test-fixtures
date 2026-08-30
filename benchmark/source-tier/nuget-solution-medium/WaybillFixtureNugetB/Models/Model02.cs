using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetB.Models
{
    public sealed record Model02(
        string Id,
        string Name,
        DateTimeOffset CreatedAt,
        IReadOnlyList<string> Tags)
    {
        public bool HasTag(string tag) => Tags.Contains(tag);
    }
}
