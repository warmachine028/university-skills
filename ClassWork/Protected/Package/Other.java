// CODE 2c: Illustration of application of acccessing protected fields within a package

package Package;

public class Other {
    public static void main(String[] args) { // Class in other File accessing protected fields and methods
        new Protected().method();
        Protected.method2();
        System.out.println(new Protected().variable);
    }
}
