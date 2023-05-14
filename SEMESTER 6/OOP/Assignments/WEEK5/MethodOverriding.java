class Parent {
    int method() {
        return 10;
    }

    int method2() {
        return 9;
    }
}

class Child extends Parent {
    @Override
    int method() {
        return 90;
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        Child object = new Child();
        System.out.println(object.method()); //90
        System.out.println(object.method2()); //9
    }
}
