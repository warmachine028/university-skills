// CODE 9: Java Program to stop Overriding
class Parent {
    final void method() {
        System.out.println("Parent method");
    }
}

class Child extends Parent {
    @Override
    void method() { // throws Compile Time Error
        super.method();
    }

    void newMethod() {
        method();
    }
}

public class StopOverriding {
    public static void main(String[] args) {
        Child child = new Child();
        child.newMethod();
    }
}
