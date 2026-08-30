package dev.kusari.waybill.fixture.gradle.b

import dev.kusari.waybill.fixture.gradle.b.util.Hex
import kotlin.test.Test
import kotlin.test.assertEquals

class HexTest {
    @Test
    fun encodesZero() { assertEquals("00", Hex.encode(byteArrayOf(0))) }

    @Test
    fun encodesFF() { assertEquals("ff", Hex.encode(byteArrayOf(0xff.toByte()))) }
}
