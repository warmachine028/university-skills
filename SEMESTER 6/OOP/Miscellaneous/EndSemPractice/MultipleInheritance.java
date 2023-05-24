interface Father {
    default void name() {
        System.out.println("Father");
    }
}

interface Mother {
    default void name() {
        System.out.println("Mother");
    }
}

class Child implements Father, Mother {
    Child() { // ! CTE: Unrelated Defaults
        name();
    }
}

public class MultipleInheritance {
    public static void main(String[] args) {
        new Child();
    }
}
