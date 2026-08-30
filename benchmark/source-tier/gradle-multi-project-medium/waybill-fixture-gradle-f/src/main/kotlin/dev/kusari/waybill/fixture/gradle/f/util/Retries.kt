package dev.kusari.waybill.fixture.gradle.f.util

object Retries {
    fun <T> withRetry(maxAttempts: Int, block: () -> T): T {
        var lastErr: Throwable? = null
        repeat(maxAttempts) {
            try { return block() } catch (t: Throwable) { lastErr = t }
        }
        throw lastErr ?: IllegalStateException("no attempts")
    }
}
