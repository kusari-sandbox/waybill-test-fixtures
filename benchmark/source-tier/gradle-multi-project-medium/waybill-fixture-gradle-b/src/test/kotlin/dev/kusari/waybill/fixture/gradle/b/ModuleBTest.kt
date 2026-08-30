package dev.kusari.waybill.fixture.gradle.b

import kotlin.test.Test
import kotlin.test.assertEquals

class ModuleBTest {
    @Test
    fun describeReturnsNameAndVersion() {
        assertEquals("waybill-fixture-gradle-b@0.1.0", ModuleB.describe())
    }
}
