package dev.kusari.waybill.fixture.gradle.b.service

import dev.kusari.waybill.fixture.gradle.b.model.Entity

class EntityService {
    private val entities = mutableListOf<Entity>()
    fun add(entity: Entity) { entities += entity }
    fun listByKind(kind: String): List<Entity> = entities.filter { it.kind == kind }
    fun count(): Int = entities.size
}
