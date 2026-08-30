package dev.kusari.waybill.fixture.gradle.c.util

object Strings {
    fun slugify(input: String): String = input.lowercase().replace(Regex("[^a-z0-9]+"), "-").trim('-')
    fun truncate(input: String, max: Int): String = if (input.length <= max) input else input.substring(0, max) + "..."
}
