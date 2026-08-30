package dev.kusari.waybill.fixture.gradle.e.model

data class User(val id: String, val name: String, val roles: List<String> = emptyList())
