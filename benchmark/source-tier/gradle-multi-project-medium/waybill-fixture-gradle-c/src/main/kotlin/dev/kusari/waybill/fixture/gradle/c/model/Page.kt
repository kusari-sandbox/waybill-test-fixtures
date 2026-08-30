package dev.kusari.waybill.fixture.gradle.c.model

data class Page<T>(val items: List<T>, val cursor: String? = null, val total: Int = items.size)
