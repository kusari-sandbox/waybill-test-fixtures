package dev.kusari.waybill.fixture.gradle.d.core

class EventBus {
    private val handlers = mutableListOf<(LifecycleEvent) -> Unit>()
    fun subscribe(handler: (LifecycleEvent) -> Unit) { handlers += handler }
    fun publish(event: LifecycleEvent) { handlers.forEach { it(event) } }
}
