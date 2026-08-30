package dev.kusari.waybill.fixture.gradle.b.service

import dev.kusari.waybill.fixture.gradle.b.model.Session
import dev.kusari.waybill.fixture.gradle.b.model.User

class SessionService {
    fun open(user: User, ttlMillis: Long): Session {
        val now = System.currentTimeMillis()
        return Session(id = "sess-${user.id}-$now", user = user, issuedAt = now, expiresAt = now + ttlMillis)
    }
}
