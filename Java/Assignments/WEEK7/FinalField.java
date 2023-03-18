class SuperClass {
    final int variable = 1;
}

class FinalField extends SuperClass {
    FinalField() {
        this.variable = 10; // This gives Compile time ERROR
    }

    public static void main(String... args) {
        new FinalField();
    }
}
