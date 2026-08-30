package dev.kusari.waybill.fixture.maven.util;

/**
 * Synthetic utility Times for module d.
 */
public final class Times {
    private Times() {
    }

    public static boolean isBlank(String value) {
        return value == null || value.trim().isEmpty();
    }

    public static String defaultIfBlank(String value, String fallback) {
        return isBlank(value) ? fallback : value;
    }
}
