package dev.kusari.waybill.fixture.gradle.a.core

class Engine(val label: String = "a-engine") {
    fun tick(): Long = System.nanoTime()
    fun brand(): String = "waybill-fixture:$label"
}
