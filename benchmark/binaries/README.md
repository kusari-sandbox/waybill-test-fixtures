# binaries/

Placeholder — the `linux-binaries-50/` fixture is deferred to a
follow-up PR against this repo per the stubs-first T014 execution
strategy for milestone 669.

The follow-up will populate ~50 real binaries from a canonical Linux
source (coreutils / busybox) extracted from a debian:12-slim
container. NOT random garbage bytes — waybill's binary readers
inspect symbol tables + PE/ELF/Mach-O headers, so real binary
content is required for the fingerprints-corpus mode to exercise
meaningfully.

Rough recipe:

```sh
docker create --name busybox-extract busybox:1.36
docker cp busybox-extract:/bin ./tmp-bin
docker rm busybox-extract
mkdir -p linux-binaries-50
# Copy the first 50 non-symlink binaries; adjust as needed.
find ./tmp-bin -maxdepth 1 -type f | head -50 | \
  xargs -I{} cp {} linux-binaries-50/
```
