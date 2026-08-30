using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Waybill.Fixture.NugetD.Models
{
    public sealed record Model13(
        string Id,
        string Name,
        DateTimeOffset CreatedAt,
        IReadOnlyList<string> Tags)
    {
        public bool HasTag(string tag) => Tags.Contains(tag);
    }
}
