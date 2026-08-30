package dev.kusari.waybill.fixture.maven;

import dev.kusari.waybill.fixture.maven.service.Writer;

/**
 * Synthetic test stub for module c.
 */
public class WriterTest {
    public void constructsWithBackend() {
        Writer instance = new Writer("in-memory");
        assert instance.backend().equals("in-memory");
    }
}
