package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic model type for module b.
 */
public final class Record {
    private final String id;
    private final long timestamp;

    public Record(String id, long timestamp) {
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
