// CODE 4: Implementation of Single Inheritence in Java

class Parent {
    int parentProperty = 900;
    int overridden = 404;
}

class Child1 extends Parent {
    int overridden = 10;
}

class Child2 extends Parent {
    int overridden = 20;
}

public class HeirarchicalInheritence {
    public static void main(String[] args) {
        Child1 child1 = new Child1();
        Child2 child2 = new Child2();
        System.out.println(child1.overridden + " " + child1.parentProperty);
        System.out.println(child2.overridden + " " + child2.parentProperty);
    }
}
