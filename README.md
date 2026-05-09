# mikebom-test-fixtures

These are **intentionally vulnerable** test fixtures for [mikebom](https://github.com/kusari-sandbox/mikebom). **DO NOT use as a reference.**

This repo exists to keep mikebom's main repo free of fake-project trigger surface for security scanners. mikebom's test suite clones this repo at build time via a pin in `tests/fixtures.rev` (in mikebom main repo) + `mikebom-cli/build.rs`.

See `specs/090-split-test-fixtures-repo/` in the [mikebom main repo](https://github.com/kusari-sandbox/mikebom) for the migration design.

## Purpose

Every fixture here is a deliberately-shaped fake project that exists to drive one or more of mikebom's:

- Per-ecosystem readers (cargo, npm, gem, go, maven, pip, etc.)
- Milestone-083 transitive-parity audit (cross-tool comparison against trivy + syft)
- Cross-format regression goldens (CDX 1.6 / SPDX 2.3 / SPDX 3)
- Edge-case error-path tests (lockfile-v1-refused, etc.)

These fixtures are not consumable; vulnerability scanners flagging them is a false positive — they're test inputs, not deployed software.

## Layout

Mirrors mikebom's pre-090 directory structure (flattens the historical `tests/` vs `mikebom-cli/tests/` split):

- `transitive_parity/<eco>/` — milestone-083 audit fixtures (vendored real-world projects: clap-rs/clap @ v4.5.21, fastlane/fastlane, etc.).
- `<eco>/<name>/` — per-ecosystem reader fixtures (e.g., `cargo/lockfile-v3/`, `npm/scoped-package/`).
- `polyglot-monorepo/` — multi-ecosystem fixture exercising cross-language dep extraction.
- `cargo-workspace/`, `maven-multi-module-reactor/`, `npm-scoped-package/`, `npm-workspace/`, `pip-pyproject-pep621/`, `pip-pyproject-poetry-only/` — workspace-style fixtures.

## Adding a fixture

1. Add the fixture directory in this repo.
2. Commit + push.
3. Bump `tests/fixtures.rev` in mikebom main repo to the new SHA.
4. Update tests in mikebom main repo to reference the new fixture via `fixture_path("...")`.

## Pin mechanism

mikebom main repo's `tests/fixtures.rev` is a single-line file containing a 40-char Git SHA from this repo. mikebom's `build.rs` reads it, clones this repo at the pinned SHA into `~/.cache/mikebom/fixtures/<sha>/`, and exposes the path to test code via the `MIKEBOM_FIXTURES_DIR` compile-time env var.

Multiple historical SHAs co-exist in the cache (useful during git-bisect through mikebom's history).

## Vulnerabilities

Every lockfile in this repo lists deliberately-vulnerable dependency versions. Please don't open issues asking us to bump them — that would defeat the fixtures' purpose. The mikebom main repo's CI scans only its own production deps (not these fixtures) for the same reason.
