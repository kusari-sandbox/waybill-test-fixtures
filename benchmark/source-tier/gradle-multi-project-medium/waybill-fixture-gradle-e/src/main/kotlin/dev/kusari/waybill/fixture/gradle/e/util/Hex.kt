package dev.kusari.waybill.fixture.gradle.e.util

object Hex {
    private val ALPHABET = "0123456789abcdef".toCharArray()
    fun encode(bytes: ByteArray): String = buildString(bytes.size * 2) {
        for (b in bytes) { val v = b.toInt() and 0xff; append(ALPHABET[v shr 4]); append(ALPHABET[v and 0x0f]) }
    }
}
