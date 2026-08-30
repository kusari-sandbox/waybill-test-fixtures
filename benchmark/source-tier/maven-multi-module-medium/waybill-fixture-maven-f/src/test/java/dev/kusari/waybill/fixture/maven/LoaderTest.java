package dev.kusari.waybill.fixture.maven;

import dev.kusari.waybill.fixture.maven.service.Loader;

/**
 * Synthetic test stub for module f.
 */
public class LoaderTest {
    public void constructsWithBackend() {
        Loader instance = new Loader("in-memory");
        assert instance.backend().equals("in-memory");
    }
}
