rootProject.name = "waybill-fixture-gradle-root"

include(
    ":waybill-fixture-gradle-a",
    ":waybill-fixture-gradle-b",
    ":waybill-fixture-gradle-c",
    ":waybill-fixture-gradle-d",
    ":waybill-fixture-gradle-e",
    ":waybill-fixture-gradle-f",
)

dependencyResolutionManagement {
    repositories {
        mavenCentral()
    }
}
