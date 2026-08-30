package dev.kusari.waybill.fixture.maven;

/**
 * Synthetic test stub for module e.
 */
public class ModuleEAppTest {
    public void nameReturnsExpectedValue() {
        String actual = ModuleEApp.name();
        assert actual.equals("waybill-fixture-maven-e");
    }

    public void mainAcceptsEmptyArgs() {
        ModuleEApp.main(new String[]{});
    }
}
