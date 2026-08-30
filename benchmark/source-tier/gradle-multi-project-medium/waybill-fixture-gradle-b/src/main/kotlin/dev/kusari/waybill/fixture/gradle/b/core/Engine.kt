package dev.kusari.waybill.fixture.gradle.b.core

class Engine(val label: String = "b-engine") {
    fun tick(): Long = System.nanoTime()
    fun brand(): String = "waybill-fixture:$label"
}
