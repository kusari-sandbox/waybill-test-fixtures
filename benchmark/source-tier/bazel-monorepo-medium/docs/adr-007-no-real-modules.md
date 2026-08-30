# ADR 007: No real BCR modules

Accepted 2026-08-16.

Every `bazel_dep` uses the `waybill_fixture_bazel_*` naming prefix.
No real Bazel Central Registry module (rules_cc, protobuf, etc.)
appears anywhere in this fixture — this keeps Kusari Inspector's
advisory scan clean.
