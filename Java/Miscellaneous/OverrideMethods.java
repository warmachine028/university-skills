class Parent {
    void method() {
        System.out.println("Non Static Method");
    }

    static void method1() {
        System.out.println("Static Method");
    }
}

class Child extends Parent {
    @Override
    void method() { // -> Method OverLoading
        System.out.println("Non Static Method");
    }

    // @Override
    static void method1() { // -> Method Hiding
        System.out.println("Static Method");
    }
}

public class OverrideMethods {
    public static void main(String[] args) {
        new Child().method();
        Child.method1();
    }
}
