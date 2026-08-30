package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic marker interface for module a.
 */
public interface Validated {
    String describe();

    default boolean isValid() {
        return describe() != null && !describe().isEmpty();
    }
}
