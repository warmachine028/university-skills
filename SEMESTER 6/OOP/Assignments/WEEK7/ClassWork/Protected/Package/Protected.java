// CODE 2e: Illustration of protcted fields in a package

package Package;

// protected class Protected {} => Classes can't be protected
// private class Private {} => Classes can't be private

public class Protected {
    protected int variable = 10;

    protected static void method2() {}

    protected void method() {
        return;
    }
}
