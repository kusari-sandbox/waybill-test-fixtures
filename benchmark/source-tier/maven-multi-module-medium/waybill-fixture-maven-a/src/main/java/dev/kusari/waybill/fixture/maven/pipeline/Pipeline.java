package dev.kusari.waybill.fixture.maven.pipeline;

/**
 * Synthetic pipeline Pipeline for module a.
 */
public class Pipeline {
    private final String label;

    public Pipeline(String label) {
        this.label = label;
    }

    public String label() {
        return label;
    }

    public boolean matches(String candidate) {
        return this.label.equals(candidate);
    }
}
