package dev.kusari.waybill.fixture.gradle.a.api

data class RequestEnvelope(
    val id: String,
    val payload: Map<String, Any?> = emptyMap(),
    val headers: Map<String, String> = emptyMap(),
)
