package dev.kusari.waybill.fixture.maven.util;

/**
 * Synthetic utility Numbers for module a.
 */
public final class Numbers {
    private Numbers() {
    }

    public static boolean isBlank(String value) {
        return value == null || value.trim().isEmpty();
    }

    public static String defaultIfBlank(String value, String fallback) {
        return isBlank(value) ? fallback : value;
    }
}
