# waybill fixture: bazel-monorepo-medium

Synthetic Bazel bzlmod monorepo used by the waybill benchmark harness.
All module names use the `waybill_fixture_bazel_*` prefix and are NOT
real Bazel Central Registry entries.

## Layout

- `MODULE.bazel` — bzlmod module declaration + ~35 `bazel_dep` entries
- `WORKSPACE` — legacy shim (empty; bzlmod is authoritative)
- `apps/` — 12 synthetic C++ applications
- `libs/` — 10 synthetic C++ libraries with cross-references
- `starlark/` — shared Starlark macros consumed by BUILD files
- `tools/` — toolchain and helper definitions
- `docs/` — placeholder markdown for surface-area weight

This fixture is deliberately size-bounded (<1 MB) but wide (~250 files)
so waybill's deep-hash pass exercises realistic per-file work.
