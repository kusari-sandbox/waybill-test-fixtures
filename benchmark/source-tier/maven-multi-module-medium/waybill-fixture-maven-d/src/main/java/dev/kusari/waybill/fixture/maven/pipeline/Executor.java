package dev.kusari.waybill.fixture.maven.pipeline;

/**
 * Synthetic pipeline Executor for module d.
 */
public class Executor {
    private final String label;

    public Executor(String label) {
        this.label = label;
    }

    public String label() {
        return label;
    }

    public boolean matches(String candidate) {
        return this.label.equals(candidate);
    }
}
