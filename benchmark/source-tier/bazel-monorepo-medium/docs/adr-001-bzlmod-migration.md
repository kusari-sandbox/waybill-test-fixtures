# ADR 001: bzlmod migration

Accepted 2026-06-01.

The fixture uses bzlmod (`MODULE.bazel`) as the authoritative dependency
manifest. `WORKSPACE` remains as an empty shim per Bazel 7 defaults.
