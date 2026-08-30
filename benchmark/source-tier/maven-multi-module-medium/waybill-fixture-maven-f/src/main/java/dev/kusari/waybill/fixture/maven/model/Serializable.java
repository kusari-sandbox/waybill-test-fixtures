package dev.kusari.waybill.fixture.maven.model;

/**
 * Synthetic marker interface for module f.
 */
public interface Serializable {
    String describe();

    default boolean isValid() {
        return describe() != null && !describe().isEmpty();
    }
}
