package dev.kusari.waybill.fixture.gradle.c.api

class ApiRegistry {
    private val specs = mutableMapOf<String, ApiSpec>()
    fun register(spec: ApiSpec) { specs[spec.name()] = spec }
    fun lookup(name: String): ApiSpec? = specs[name]
    fun size(): Int = specs.size
}
