class Parent {
    Parent() {
        System.out.println("Parent Class Constructor");
        display();
    }

    void display() {
        System.out.println("Parent Method");
    }
}

class Child extends Parent {
    Child() {
        System.out.println("Child Class Constructor");
    }

    @Override
    void display() {
        System.out.println("Child Method");
    }
}

public class DynamicMethodDispatch {
    public static void main(String[] args) {
        Parent child = new Child(); // UpCasting
        child.display();
    }
}
