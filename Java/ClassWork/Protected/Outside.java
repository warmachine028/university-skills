// CODE 2b: Illustration of usage of User Defined Packages

import Package.Protected;

public class Outside {
    public static void main(String[] args) {
        Protected.method2();
        new Protected().method(); // -> CTE: Protected Method can't be accessed outside Package
        System.out.println(new Protected().variable); // -> CTE: Protected field can't be accessed outside Package

    }
}
