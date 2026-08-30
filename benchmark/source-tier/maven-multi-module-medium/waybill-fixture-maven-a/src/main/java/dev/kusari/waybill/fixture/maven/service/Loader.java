package dev.kusari.waybill.fixture.maven.service;

import dev.kusari.waybill.fixture.maven.model.Record;

/**
 * Synthetic service type for module a.
 */
public class Loader {
    private final String backend;

    public Loader(String backend) {
        this.backend = backend;
    }

    public String backend() {
        return backend;
    }

    public Record handle(Record input) {
        return input;
    }
}
