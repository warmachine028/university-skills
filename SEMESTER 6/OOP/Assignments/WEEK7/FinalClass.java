final class SuperClass {
}

public class FinalClass extends SuperClass { // ! => Gives Compile Time Error

    public static void main(String... args) {
        new FinalClass();
    }
}
