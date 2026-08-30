package dev.kusari.waybill.fixture.gradle.c.model

sealed class Result<out T> {
    data class Ok<T>(val value: T) : Result<T>()
    data class Err(val message: String) : Result<Nothing>()
}
