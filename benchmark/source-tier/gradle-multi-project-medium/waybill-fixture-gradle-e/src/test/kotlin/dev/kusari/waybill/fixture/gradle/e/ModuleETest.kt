package dev.kusari.waybill.fixture.gradle.e

import kotlin.test.Test
import kotlin.test.assertEquals

class ModuleETest {
    @Test
    fun describeReturnsNameAndVersion() {
        assertEquals("waybill-fixture-gradle-e@0.1.0", ModuleE.describe())
    }
}
