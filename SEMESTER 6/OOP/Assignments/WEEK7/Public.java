class Class {
    void method() {
        System.out.println("Default Method");
    }

    private void method1() {
        // Visible only within this class
        System.out.println("Private Method");
    }

    protected void method2() {
        // Visible within same package or SubClasses
        System.out.println("Protected Method");
    }

    public void method3() {
        // Visible EveryWhere
        System.out.println("Public Method");
        method1();
    }

    static void method4() {
        // Memory Allocated only once
        System.out.println("Static Method");
    }

    final void method5() {
        // Non Overridable
        System.out.println("Final Method");
    }

    /*
        abstract void method6(); -> Can be declared only in Abstract Classes
    */
}

public class Public extends Class {
    public static void main(String[] args) {
        var object = new Public();
        object.method();
        // object.method1(); // Can't Access Since private
        object.method2(); // Protected Accessible in SubClass
        object.method3(); // Public methods accessible everywhere
    }
}
