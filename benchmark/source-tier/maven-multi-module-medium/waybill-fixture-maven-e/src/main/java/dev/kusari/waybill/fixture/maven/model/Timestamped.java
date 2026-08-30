package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic marker interface for module e.
 */
public interface Timestamped {
    String describe();

    default boolean isValid() {
        return describe() != null && !describe().isEmpty();
    }
}
