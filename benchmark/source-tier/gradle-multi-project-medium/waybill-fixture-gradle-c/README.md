# waybill-fixture-gradle-c

Synthetic Gradle Kotlin-DSL subproject used by the waybill benchmark
fixture set.

## Layout

- `build.gradle.kts` — 10 `implementation(...)` deps (all synthetic).
- `gradle.lockfile` — every dep pinned on `runtimeClasspath`.
- `src/main/kotlin/**` — five sub-packages (`api`, `core`, `model`,
  `service`, `util`) with tiny stubs.
- `src/main/resources/**` — properties + logback + a fake SPI file.
- `src/test/kotlin/**` — a handful of `kotlin.test` cases.
