package dev.kusari.waybill.fixture.gradle.c.core

class Engine(val label: String = "c-engine") {
    fun tick(): Long = System.nanoTime()
    fun brand(): String = "waybill-fixture:$label"
}
