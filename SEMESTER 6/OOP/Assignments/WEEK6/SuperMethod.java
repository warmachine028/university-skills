class OtherClass {
    OtherClass() {
        System.out.println("Called parent Class Constructor");
    }
}

public class SuperMethod extends OtherClass {
    SuperMethod() {
        super();
        System.out.println("called child class constructor");
    }

    public static void main(String[] args) {
        new SuperMethod();
    }
}
