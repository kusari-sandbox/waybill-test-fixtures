package dev.kusari.waybill.fixture.maven;

/**
 * Synthetic test stub for module c.
 */
public class ModuleCAppTest {
    public void nameReturnsExpectedValue() {
        String actual = ModuleCApp.name();
        assert actual.equals("waybill-fixture-maven-c");
    }

    public void mainAcceptsEmptyArgs() {
        ModuleCApp.main(new String[]{});
    }
}
