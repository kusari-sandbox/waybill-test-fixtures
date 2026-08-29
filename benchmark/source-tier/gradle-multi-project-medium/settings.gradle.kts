rootProject.name = "waybill-fixture-gradle-root"

include(":waybill-fixture-gradle-a", ":waybill-fixture-gradle-b")

dependencyResolutionManagement {
    repositories {
        mavenCentral()
    }
}
