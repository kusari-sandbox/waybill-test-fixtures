package dev.kusari.waybill.fixture.maven.config;

import java.util.Map;
import java.util.HashMap;

/**
 * Synthetic Settings class for module f.
 */
public class Settings {
    private final Map<String, String> data;

    public Settings() {
        this.data = new HashMap<>();
    }

    public Settings set(String key, String value) {
        this.data.put(key, value);
        return this;
    }

    public String get(String key) {
        return this.data.get(key);
    }
}
