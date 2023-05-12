interface Parent {
    void speaks();
}

interface Child extends Parent {
    void thinks();
}

class Class implements Child {
    public void thinks() {
        System.out.println("Thinks...");
    }

    public void speaks() {
        System.out.println("Speaks...");
    }
}

public class InheritenceInterface {
    public static void main(String[] args) {
        Class bob = new Class();
        bob.speaks();
        bob.thinks();
    }
}
