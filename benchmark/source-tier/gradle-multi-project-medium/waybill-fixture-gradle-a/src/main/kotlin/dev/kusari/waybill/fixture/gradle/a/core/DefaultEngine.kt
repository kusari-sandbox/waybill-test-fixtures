package dev.kusari.waybill.fixture.gradle.a.core

class DefaultEngine : Engine("default") {
    val bus = EventBus()
    fun boot() { bus.publish(LifecycleEvent.STARTUP); bus.publish(LifecycleEvent.READY) }
    fun stop() { bus.publish(LifecycleEvent.DRAIN); bus.publish(LifecycleEvent.SHUTDOWN) }
}
