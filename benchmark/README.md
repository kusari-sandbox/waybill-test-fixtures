# benchmark/ — waybill perf-suite fixtures (milestone 669)

This subtree is consumed by `xtask bench` in the mikebom main repo.
The registry lives in [`manifest.json`](./manifest.json); the driver
enumerates it, iterates fixture × mode combinations, and produces
`target/bench/run-<sha>.json`.

## Layout

```
benchmark/
├── manifest.json            # registry — one entry per fixture
├── source-tier/             # source-tree scan targets (12 ecosystems)
│   ├── cargo-workspace-medium/
│   ├── npm-monorepo-medium/
│   ├── pip-poetry-medium/
│   ├── go-module-medium/
│   ├── maven-multi-module-medium/
│   ├── gradle-multi-project-medium/
│   ├── gem-bundler-small/
│   ├── nuget-solution-medium/
│   ├── cmake-project-medium/
│   ├── bazel-monorepo-medium/
│   ├── conan-project-medium/
│   └── vcpkg-project-medium/
├── container-images/
│   └── debian-slim.tar      # (deferred to follow-up PR)
└── binaries/
    └── linux-binaries-50/   # (deferred to follow-up PR)
```

## Fixture naming discipline

Every synthetic package name in every lockfile MUST use the
`waybill-fixture-<ecosystem>-*` prefix. Real coordinates (e.g., `serde`,
`react`, `requests`) trip Kusari Inspector advisory scans on downstream
consumers of the waybill binary that scans these fixtures.

## Scan-class classification

Fixtures declare `expected_scan_class` in the manifest (`fast` <500ms,
`medium` 500ms–5s, `slow` >5s). These initial stubs may scan as `fast`
until size-tuning lands in a follow-up. The manifest's declared class
is aspirational; T027's US1 acceptance test records actuals.

## Adding a new fixture

1. Add a directory under `benchmark/source-tier/<name>/` with your
   synthetic lockfile.
2. Add a `manifest.json` entry with `{name, path, kind, ecosystem,
   supported_modes, expected_scan_class}`.
3. Open PR against this repo; bump the `tests/fixtures.rev` pin in
   mikebom to consume it.

See [waybill specs/669-bench-harness](https://github.com/kusari-oss/waybill/tree/main/specs/669-bench-harness)
for the full contract.
