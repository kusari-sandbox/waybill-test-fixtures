package dev.kusari.waybill.fixture.gradle.f

import dev.kusari.waybill.fixture.gradle.f.model.User
import dev.kusari.waybill.fixture.gradle.f.service.UserService
import kotlin.test.Test
import kotlin.test.assertEquals

class UserServiceTest {
    @Test
    fun putAndGet() {
        val svc = UserService()
        val u = User(id = "u1", name = "alice")
        svc.put(u)
        assertEquals(u, svc.get("u1"))
    }
}
