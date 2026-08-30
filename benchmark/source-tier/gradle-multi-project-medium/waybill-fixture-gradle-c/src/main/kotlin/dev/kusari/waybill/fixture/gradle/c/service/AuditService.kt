package dev.kusari.waybill.fixture.gradle.c.service

class AuditService {
    private val events = mutableListOf<String>()
    fun record(event: String) { events += "${System.currentTimeMillis()}:$event" }
    fun tail(n: Int): List<String> = events.takeLast(n)
}
