# binaries/

Binary-set fixtures for the m669 perf-suite benchmark.

## `linux-binaries-50/`

- **Contents**: 50 real ELF 64-bit x86_64 executables extracted from
  `debian:12-slim` (`/usr/bin/` — the first 50 non-symlink executables
  in alphabetical order). Each is a real dynamically-linked ELF with
  a valid BuildID (SHA-1), stripped debug info.
- **Size**: ~3.6 MB total (raw binary bytes; APFS block-slack varies).
- **Scan class**: `fast` empirically (~55ms Default mode on macOS
  arm64). The `fingerprints-corpus` mode would exercise waybill's
  fingerprint-matcher across all 50 binaries — heavier signal, but
  requires a warm `~/.cache/waybill/fingerprints/<sha>/` corpus (per
  spec Assumption 9, absent corpus → `ExitStatus::CorpusUnreachable`).

## Refreshing the binaries

When the pinned debian:12-slim digest changes:

```sh
CID=$(docker create --platform linux/amd64 debian:12-slim)
docker cp "$CID:/usr/bin/" /tmp/m669-binaries/
docker rm "$CID"

rm -rf benchmark/binaries/linux-binaries-50/*
find /tmp/m669-binaries/bin -maxdepth 1 -type f -executable -not -type l \
  | sort | head -50 \
  | xargs -I{} cp {} benchmark/binaries/linux-binaries-50/
```

Then bump `tests/fixtures.rev` in the mikebom main repo + refresh
`docs/perf/baseline.json`.
