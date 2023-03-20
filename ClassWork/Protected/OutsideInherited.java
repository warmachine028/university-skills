// CODE 2d: Illustration of application of acccessing protected fields outside a package from a subClass

import Package.Protected;

public class OutsideInherited extends Protected {
    void function() {
        method();
        method2();
        System.out.println(variable); // -> Accessible from SubClass

    }
    public static void main(String[] args) {
        new OutsideInherited().method();
        new Protected().method(); // CTE: Can't access protected 
        Protected.method2();
    }
}