package dev.kusari.waybill.fixture.gradle.e.model

data class Page<T>(val items: List<T>, val cursor: String? = null, val total: Int = items.size)
