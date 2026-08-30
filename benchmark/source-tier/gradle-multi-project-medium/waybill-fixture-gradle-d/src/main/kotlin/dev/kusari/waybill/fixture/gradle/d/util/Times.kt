package dev.kusari.waybill.fixture.gradle.d.util

object Times {
    fun nowEpochMillis(): Long = System.currentTimeMillis()
    fun elapsedMillis(startNanos: Long): Long = (System.nanoTime() - startNanos) / 1_000_000
}
