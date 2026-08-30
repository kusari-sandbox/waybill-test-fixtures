package dev.kusari.waybill.fixture.maven;

/**
 * Synthetic test stub for module f.
 */
public class ModuleFAppTest {
    public void nameReturnsExpectedValue() {
        String actual = ModuleFApp.name();
        assert actual.equals("waybill-fixture-maven-f");
    }

    public void mainAcceptsEmptyArgs() {
        ModuleFApp.main(new String[]{});
    }
}
