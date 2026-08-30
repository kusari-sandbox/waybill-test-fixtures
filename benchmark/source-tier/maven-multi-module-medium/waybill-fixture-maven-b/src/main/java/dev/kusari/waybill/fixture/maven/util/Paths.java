package dev.kusari.waybill.fixture.maven.util;

/**
 * Synthetic utility Paths for module b.
 */
public final class Paths {
    private Paths() {
    }

    public static boolean isBlank(String value) {
        return value == null || value.trim().isEmpty();
    }

    public static String defaultIfBlank(String value, String fallback) {
        return isBlank(value) ? fallback : value;
    }
}
