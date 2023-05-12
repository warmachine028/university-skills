class OtherClass {
    OtherClass() {
        System.out.println("Super Class Constructor");
    }

    OtherClass(int param) {
        System.out.println(param);
    }
}

public class SuperWithParams extends OtherClass {
    SuperWithParams() {
        super(10);
        System.out.println("Sub Class Constructor");
    }

    public static void main(String[] args) {
        new SuperWithParams();
    }
}
