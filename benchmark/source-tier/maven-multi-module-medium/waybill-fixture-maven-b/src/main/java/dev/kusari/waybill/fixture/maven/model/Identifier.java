package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic marker interface for module b.
 */
public interface Identifier {
    String describe();

    default boolean isValid() {
        return describe() != null && !describe().isEmpty();
    }
}
