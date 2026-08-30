package dev.kusari.waybill.fixture.gradle.f.service

import dev.kusari.waybill.fixture.gradle.f.model.User

class UserService {
    private val store = mutableMapOf<String, User>()
    fun put(user: User): User { store[user.id] = user; return user }
    fun get(id: String): User? = store[id]
    fun all(): List<User> = store.values.toList()
}
