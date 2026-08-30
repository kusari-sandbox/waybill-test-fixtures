package dev.kusari.waybill.fixture.gradle.a

import kotlin.test.Test
import kotlin.test.assertEquals

class ModuleATest {
    @Test
    fun describeReturnsNameAndVersion() {
        assertEquals("waybill-fixture-gradle-a@0.1.0", ModuleA.describe())
    }
}
