# waybill-fixture-gradle-a

Synthetic Gradle Kotlin-DSL subproject used by the waybill benchmark
fixture set. Nothing in this directory is a real coordinate; every
group/name pair lives under `dev.kusari.waybill.fixture.gradle.*` on
purpose so we never collide with public advisories.

## Layout

- `build.gradle.kts` — 10 `implementation(...)` deps (all synthetic).
- `gradle.lockfile` — every dep pinned on `runtimeClasspath`.
- `src/main/kotlin/**` — five sub-packages (`api`, `core`, `model`,
  `service`, `util`) with tiny stubs.
- `src/main/resources/**` — properties + logback + a fake SPI file.
- `src/test/kotlin/**` — a handful of `kotlin.test` cases.

## Do not
- Rename `build.gradle.kts` to `build.gradle`; per repo memory a system
  gradle install may pick up Groovy DSL and skew the ladder-tier tests.
