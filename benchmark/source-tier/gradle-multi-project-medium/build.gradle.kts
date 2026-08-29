plugins {
    `java-library`
}

allprojects {
    group = "dev.kusari.waybill.fixture.gradle"
    version = "0.1.0"
}

subprojects {
    apply(plugin = "java-library")

    dependencyLocking {
        lockAllConfigurations()
    }
}
