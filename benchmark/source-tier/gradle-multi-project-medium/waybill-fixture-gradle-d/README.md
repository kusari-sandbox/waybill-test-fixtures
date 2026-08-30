# waybill-fixture-gradle-d

Synthetic Gradle Kotlin-DSL subproject used by the waybill benchmark
fixture set. Depends on `:waybill-fixture-gradle-c` for a second
inter-subproject edge.

## Layout

- `build.gradle.kts` — 9 external synthetic deps + one `project(...)` dep.
- `gradle.lockfile` — every external dep pinned on `runtimeClasspath`.
- `src/main/kotlin/**` — five sub-packages (`api`, `core`, `model`,
  `service`, `util`) with tiny stubs.
- `src/main/resources/**` — properties + logback + a fake SPI file.
- `src/test/kotlin/**` — a handful of `kotlin.test` cases.
