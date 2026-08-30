package dev.kusari.waybill.fixture.gradle.c.util

object Collections {
    fun <T> chunked(input: List<T>, size: Int): List<List<T>> = input.chunked(size)
    fun <T> distinctPreserveOrder(input: List<T>): List<T> = input.distinct()
}
