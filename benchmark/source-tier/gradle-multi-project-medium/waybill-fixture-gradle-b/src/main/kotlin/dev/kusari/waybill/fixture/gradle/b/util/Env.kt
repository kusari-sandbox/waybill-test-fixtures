package dev.kusari.waybill.fixture.gradle.b.util

object Env {
    fun get(key: String, default: String = ""): String = System.getenv(key) ?: default
    fun bool(key: String): Boolean = get(key).equals("true", ignoreCase = true)
}
