package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic marker interface for module c.
 */
public interface Timestamped {
    String describe();

    default boolean isValid() {
        return describe() != null && !describe().isEmpty();
    }
}
