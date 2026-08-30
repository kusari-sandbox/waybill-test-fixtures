package dev.kusari.waybill.fixture.maven;

/**
 * Synthetic test stub for module b.
 */
public class ModuleBAppTest {
    public void nameReturnsExpectedValue() {
        String actual = ModuleBApp.name();
        assert actual.equals("waybill-fixture-maven-b");
    }

    public void mainAcceptsEmptyArgs() {
        ModuleBApp.main(new String[]{});
    }
}
