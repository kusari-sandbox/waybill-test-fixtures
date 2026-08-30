package dev.kusari.waybill.fixture.gradle.d.core

class Engine(val label: String = "d-engine") {
    fun tick(): Long = System.nanoTime()
    fun brand(): String = "waybill-fixture:$label"
}
