class Class {
    // Integer property is abstracted using private access modifier
    private int integer = 10;
}

public class Abstraction {
    public static void main(String[] args) {
        Class object = new Class();
        // Integer property is not accessible
        System.out.println(object.integer);
    }
}