public class InstanceInitializer {
    int i;
    {
        for (; i < 4; i++) {
            System.out.println(i);
        }
    }

    private InstanceInitializer() {
        System.out.println("Constructor");
        for (; i < 12; i++) {
            System.out.println(i);
        }
    }

    {
        System.out.println("IIB 2");
        for (; i < 8; i++) {
            System.out.println(i);
        }
    }

    void method(int parameter) {
    }

    void method(int parameter1, int parameter2) {
    }

    public static void main(String[] args) {
        new InstanceInitializer();
    }
}
