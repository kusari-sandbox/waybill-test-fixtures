# ADR 002: Toolchain selection

Accepted 2026-06-15.

Toolchain resolution is intentionally shallow — the fixture ships a
single synthetic `waybill_fixture_bazel_cc_toolchain` and does not
attempt platform-aware toolchain selection.
