# Dependency graph

Simplified view:

- apps → 2 libs each (adjacent numeric IDs)
- libs → 1 lib peer + 1 external bazel module
- 3 dev-only bazel_deps (test_harness, bench_kit, lint_tools)

Depth: 3. Fan-out per lib: ~2.
