package dev.kusari.waybill.fixture.gradle.b.api

interface ApiSpec {
    fun name(): String
    fun handle(request: Map<String, Any?>): Map<String, Any?>
}
