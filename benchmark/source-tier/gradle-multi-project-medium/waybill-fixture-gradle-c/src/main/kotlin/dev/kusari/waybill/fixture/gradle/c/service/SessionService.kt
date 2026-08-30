package dev.kusari.waybill.fixture.gradle.c.service

import dev.kusari.waybill.fixture.gradle.c.model.Session
import dev.kusari.waybill.fixture.gradle.c.model.User

class SessionService {
    fun open(user: User, ttlMillis: Long): Session {
        val now = System.currentTimeMillis()
        return Session(id = "sess-${user.id}-$now", user = user, issuedAt = now, expiresAt = now + ttlMillis)
    }
}
