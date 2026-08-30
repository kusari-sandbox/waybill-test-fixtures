package dev.kusari.waybill.fixture.maven.service;

import java.util.List;
import java.util.ArrayList;

/**
 * Synthetic Router for module d.
 */
public final class Router {
    private final List<String> registry;

    public Router() {
        this.registry = new ArrayList<>();
    }

    public void register(String name) {
        this.registry.add(name);
    }

    public int count() {
        return this.registry.size();
    }

    public List<String> registry() {
        return List.copyOf(this.registry);
    }
}
