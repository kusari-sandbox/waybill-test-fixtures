package dev.kusari.waybill.fixture.maven.config;

import java.util.Map;
import java.util.HashMap;

/**
 * Synthetic Environment class for module a.
 */
public class Environment {
    private final Map<String, String> data;

    public Environment() {
        this.data = new HashMap<>();
    }

    public Environment set(String key, String value) {
        this.data.put(key, value);
        return this;
    }

    public String get(String key) {
        return this.data.get(key);
    }
}
