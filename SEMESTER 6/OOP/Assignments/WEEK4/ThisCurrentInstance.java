class Class {
    void checkEquality(Class other) {
        System.out.println(this == other);
    }
}

public class ThisCurrentInstance {
    public static void main(String[] args) {
        Class instance = new Class(), instance2 = new Class();
        instance.checkEquality(instance); // true
        instance2.checkEquality(instance); // false
        System.out.println(instance.equals(instance2)); // false
    }
}
