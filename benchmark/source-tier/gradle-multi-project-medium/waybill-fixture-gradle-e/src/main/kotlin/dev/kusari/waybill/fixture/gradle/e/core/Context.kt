package dev.kusari.waybill.fixture.gradle.e.core

class Context(val attributes: MutableMap<String, Any?> = mutableMapOf()) {
    fun set(key: String, value: Any?) { attributes[key] = value }
    fun <T> get(key: String): T? {
        @Suppress("UNCHECKED_CAST")
        return attributes[key] as T?
    }
}
