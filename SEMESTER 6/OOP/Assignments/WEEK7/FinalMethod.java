class SuperClass {
    final void method() {
    }
}

public class FinalMethod extends SuperClass {
    @Override
    void method() {
    } // ! => Gives Compile Time Error

    public static void main(String... args) {
        new FinalMethod();
    }
}
