# Known limits

- Fixture does not build. All external `bazel_dep` names are synthetic.
- Cross-lib deps form a shallow DAG (max depth ~3).
- No test runner. `test.cc` files are compile-only placeholders.
