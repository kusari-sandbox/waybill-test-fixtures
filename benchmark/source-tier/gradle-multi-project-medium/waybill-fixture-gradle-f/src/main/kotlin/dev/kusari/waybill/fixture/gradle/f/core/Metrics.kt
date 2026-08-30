package dev.kusari.waybill.fixture.gradle.f.core

class Metrics {
    private val counters = mutableMapOf<String, Long>()
    fun inc(name: String) { counters[name] = (counters[name] ?: 0L) + 1L }
    fun snapshot(): Map<String, Long> = counters.toMap()
}
