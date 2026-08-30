package dev.kusari.waybill.fixture.gradle.b.service

class AuditService {
    private val events = mutableListOf<String>()
    fun record(event: String) { events += "${System.currentTimeMillis()}:$event" }
    fun tail(n: Int): List<String> = events.takeLast(n)
}
