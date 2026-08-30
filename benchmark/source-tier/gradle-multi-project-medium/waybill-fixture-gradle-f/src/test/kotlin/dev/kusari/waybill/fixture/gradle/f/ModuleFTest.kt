package dev.kusari.waybill.fixture.gradle.f

import kotlin.test.Test
import kotlin.test.assertEquals

class ModuleFTest {
    @Test
    fun describeReturnsNameAndVersion() {
        assertEquals("waybill-fixture-gradle-f@0.1.0", ModuleF.describe())
    }
}
