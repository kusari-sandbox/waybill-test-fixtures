# container-images/

Container-image fixtures for the m669 perf-suite benchmark.

## `debian-slim.tar`

- **Source**: `docker pull --platform linux/amd64 debian:12-slim` (digest
  `sha256:88200866dfff7ea7f5cbcb6ec7c8a701889efe6fe859fe64d6990e4b07ea4171`
  as of population).
- **Size**: ~29 MB tar (uncompressed).
- **Populated via**: `docker save --platform linux/amd64 debian:12-slim -o debian-slim.tar`.
- **Scan class**: `medium` (empirically ~1.8–2.1s Default mode on macOS
  arm64; expected similar or faster on Linux x86_64 CI). 358 real
  components discovered by waybill's dpkg reader in the initial
  smoke run.

## Refreshing the tarball

When the pinned digest changes (e.g., debian:12-slim gets a security
update), re-pull and re-save:

```sh
docker pull --platform linux/amd64 debian:12-slim
docker save --platform linux/amd64 debian:12-slim \
  -o benchmark/container-images/debian-slim.tar
```

Then bump `tests/fixtures.rev` in the mikebom main repo to the new
fixtures-repo merge SHA + refresh `docs/perf/baseline.json`.
