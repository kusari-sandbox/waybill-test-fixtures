# Architecture

The fixture monorepo has two layers:

1. **libs/** — 10 leaf libraries, most depend on one or two peers.
2. **apps/** — 12 applications, each depends on 2-3 libs plus 1-2
   external bazel modules from `MODULE.bazel`.

The dep graph is intentionally shallow (max depth 3) so the surface
looks like a real monorepo without exploding the fixture size.
