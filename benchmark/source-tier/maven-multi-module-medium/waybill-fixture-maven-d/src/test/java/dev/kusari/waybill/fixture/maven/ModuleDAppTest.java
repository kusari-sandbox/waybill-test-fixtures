package dev.kusari.waybill.fixture.maven;

/**
 * Synthetic test stub for module d.
 */
public class ModuleDAppTest {
    public void nameReturnsExpectedValue() {
        String actual = ModuleDApp.name();
        assert actual.equals("waybill-fixture-maven-d");
    }

    public void mainAcceptsEmptyArgs() {
        ModuleDApp.main(new String[]{});
    }
}
