package dev.kusari.waybill.fixture.gradle.e.core

class Engine(val label: String = "e-engine") {
    fun tick(): Long = System.nanoTime()
    fun brand(): String = "waybill-fixture:$label"
}
