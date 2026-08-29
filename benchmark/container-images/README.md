# container-images/

Placeholder — the `debian-slim.tar` fixture is deferred to a follow-up
PR against this repo per the stubs-first T014 execution strategy for
milestone 669.

To produce it:

```sh
docker pull debian:12-slim
docker save debian:12-slim -o benchmark/container-images/debian-slim.tar
```

Once the file exists, uncomment the manifest.json entry (it's already
declared but the file itself is TBD). SC-007 fixture-cache-fetch
budget (60s) may need re-measuring after this ~30–50 MB blob lands.
