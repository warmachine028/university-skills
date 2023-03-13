interface Interface {
    int data = 10;
    static void main() {}
}

// interface WithoutAnything implements Interface { }

abstract class a implements Interface {}


class SubClass {
    final int variable = 0;
}

class FinalKeyword extends SubClass {
    FinalKeyword () {
        // this.variable = 10; // This gives Compile time ERROR
    }
    public static void main(String... args) {
    new FinalKeyword();
    }
}
