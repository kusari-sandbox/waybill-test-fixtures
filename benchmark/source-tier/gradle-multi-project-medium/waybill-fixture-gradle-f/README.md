# waybill-fixture-gradle-f

Synthetic Gradle Kotlin-DSL subproject used by the waybill benchmark
fixture set. Fans out to two other subprojects (`a` and `e`) so the
multi-project graph has a diamond-shaped edge somewhere.

## Layout

- `build.gradle.kts` — 8 external synthetic deps + two `project(...)` deps.
- `gradle.lockfile` — every external dep pinned on `runtimeClasspath`.
- `src/main/kotlin/**` — five sub-packages (`api`, `core`, `model`,
  `service`, `util`) with tiny stubs.
- `src/main/resources/**` — properties + logback + a fake SPI file.
- `src/test/kotlin/**` — a handful of `kotlin.test` cases.
