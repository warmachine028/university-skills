// CODE 3: Implementation of Single Inheritence in Java
class Parent {
    int parentProperty = 0;
    int overridden = 404;
}

class Child extends Parent {
    int childProperty = 10;
    int overridden = 40;
}

public class SingleInheritence {
    public static void main(String[] args) {
        Child child = new Child();
        System.out.printf("%d\n%d\n%d", child.parentProperty, child.childProperty, child.overridden);
    }
}
