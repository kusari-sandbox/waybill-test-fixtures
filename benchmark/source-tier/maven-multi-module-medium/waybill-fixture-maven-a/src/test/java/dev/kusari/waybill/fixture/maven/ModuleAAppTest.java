package dev.kusari.waybill.fixture.maven;

/**
 * Synthetic test stub for module a.
 */
public class ModuleAAppTest {
    public void nameReturnsExpectedValue() {
        String actual = ModuleAApp.name();
        assert actual.equals("waybill-fixture-maven-a");
    }

    public void mainAcceptsEmptyArgs() {
        ModuleAApp.main(new String[]{});
    }
}
