package dev.kusari.waybill.fixture.gradle.a

import dev.kusari.waybill.fixture.gradle.a.model.User
import dev.kusari.waybill.fixture.gradle.a.service.UserService
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
