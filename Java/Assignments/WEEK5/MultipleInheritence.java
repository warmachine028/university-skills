// CODE 3: Implementation of Single Inheritence in Java

public class MultipleInheritence extends Child {
    int overridden = 90;

    public static void main(String[] args) {
        MultipleInheritence grandChild = new MultipleInheritence();
        System.out.printf("%d\n%d\n%d\n", grandChild.parentProperty,
                grandChild.childProperty,
                grandChild.overridden);
    }
}
