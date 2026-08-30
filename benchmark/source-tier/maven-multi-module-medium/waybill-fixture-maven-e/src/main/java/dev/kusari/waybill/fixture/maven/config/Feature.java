package dev.kusari.waybill.fixture.maven.config;

import java.util.Map;
import java.util.HashMap;

/**
 * Synthetic Feature class for module e.
 */
public class Feature {
    private final Map<String, String> data;

    public Feature() {
        this.data = new HashMap<>();
    }

    public Feature set(String key, String value) {
        this.data.put(key, value);
        return this;
    }

    public String get(String key) {
        return this.data.get(key);
    }
}
