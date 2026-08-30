package dev.kusari.waybill.fixture.gradle.d

import kotlin.test.Test
import kotlin.test.assertEquals

class ModuleDTest {
    @Test
    fun describeReturnsNameAndVersion() {
        assertEquals("waybill-fixture-gradle-d@0.1.0", ModuleD.describe())
    }
}
