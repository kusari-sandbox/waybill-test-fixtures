package dev.kusari.waybill.fixture.maven.util;

/**
 * Synthetic utility class for module c.
 */
public final class Strings {
    private Strings() {
    }

    public static boolean isEmpty(String value) {
        return value == null || value.isEmpty();
    }

    public static int length(String value) {
        return value == null ? 0 : value.length();
    }
}
