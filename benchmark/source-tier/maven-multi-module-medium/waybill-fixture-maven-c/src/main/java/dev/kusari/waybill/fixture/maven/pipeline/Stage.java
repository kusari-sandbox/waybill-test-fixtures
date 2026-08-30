package dev.kusari.waybill.fixture.maven.pipeline;

/**
 * Synthetic pipeline Stage for module c.
 */
public class Stage {
    private final String label;

    public Stage(String label) {
        this.label = label;
    }

    public String label() {
        return label;
    }

    public boolean matches(String candidate) {
        return this.label.equals(candidate);
    }
}
