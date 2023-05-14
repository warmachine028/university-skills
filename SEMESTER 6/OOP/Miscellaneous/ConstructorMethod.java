class Class {
    int i;
    Class() {
        System.out.println("Constructor: Special Method");
        for (; i < 4; i++) {
            System.out.println(i);
        }
    }

    void Class() {
        System.out.println("Normal Method");
        for (; i < 8; i++) {
            System.out.println(i);
        }
    }
}

public class ConstructorMethod {
    public static void main(String[] args) {
        new Class().Class();
    }
}
