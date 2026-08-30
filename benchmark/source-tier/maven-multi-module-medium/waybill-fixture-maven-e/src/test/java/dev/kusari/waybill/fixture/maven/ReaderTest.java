package dev.kusari.waybill.fixture.maven;

import dev.kusari.waybill.fixture.maven.service.Reader;

/**
 * Synthetic test stub for module e.
 */
public class ReaderTest {
    public void constructsWithBackend() {
        Reader instance = new Reader("in-memory");
        assert instance.backend().equals("in-memory");
    }
}
