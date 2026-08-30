package dev.kusari.waybill.fixture.gradle.c.api

data class ResponseEnvelope(
    val id: String,
    val ok: Boolean,
    val body: Map<String, Any?> = emptyMap(),
    val error: String? = null,
)
