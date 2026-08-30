package dev.kusari.waybill.fixture.gradle.c.service

import dev.kusari.waybill.fixture.gradle.c.model.Entity

class EntityService {
    private val entities = mutableListOf<Entity>()
    fun add(entity: Entity) { entities += entity }
    fun listByKind(kind: String): List<Entity> = entities.filter { it.kind == kind }
    fun count(): Int = entities.size
}
