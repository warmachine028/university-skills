// CODE 3: Implementation of Single Inheritence in Java

public class MultiLevelInheritence extends Child {
    int overridden = 90;

    public static void main(String[] args) {
        MultiLevelInheritence grandChild = new MultiLevelInheritence();
        System.out.printf("%d\n%d\n%d\n", grandChild.parentProperty,
                grandChild.childProperty,
                grandChild.overridden);
    }
}
