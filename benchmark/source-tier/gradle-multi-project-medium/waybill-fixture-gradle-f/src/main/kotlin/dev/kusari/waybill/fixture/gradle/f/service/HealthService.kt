package dev.kusari.waybill.fixture.gradle.f.service

class HealthService {
    fun healthy(): Boolean = true
    fun report(): Map<String, String> = mapOf("status" to "OK", "module" to "waybill-fixture-gradle-f")
}
