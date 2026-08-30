package dev.kusari.waybill.fixture.gradle.c

import kotlin.test.Test
import kotlin.test.assertEquals

class ModuleCTest {
    @Test
    fun describeReturnsNameAndVersion() {
        assertEquals("waybill-fixture-gradle-c@0.1.0", ModuleC.describe())
    }
}
