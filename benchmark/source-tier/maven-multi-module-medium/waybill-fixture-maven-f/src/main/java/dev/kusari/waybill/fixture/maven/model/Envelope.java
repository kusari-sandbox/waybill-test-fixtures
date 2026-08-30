package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic model type for module f.
 */
public final class Envelope {
    private final String id;
    private final long timestamp;

    public Envelope(String id, long timestamp) {
        this.id = id;
        this.timestamp = timestamp;
    }

    public String id() {
        return id;
    }

    public long timestamp() {
        return timestamp;
    }
}
