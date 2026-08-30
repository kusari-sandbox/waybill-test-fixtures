package dev.kusari.waybill.fixture.gradle.f.core

class Engine(val label: String = "f-engine") {
    fun tick(): Long = System.nanoTime()
    fun brand(): String = "waybill-fixture:$label"
}
