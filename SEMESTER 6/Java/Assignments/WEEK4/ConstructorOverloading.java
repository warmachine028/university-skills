class Class {
    int integer;
    float floating_point;

    Class(int a) {
        integer = a;
    }

    Class(float floating_point) {
        this.floating_point = floating_point;
    }
}

public class ConstructorOverloading {
    public static void main(String[] args) {
        Class class_ = new Class(0),
                class1 = new Class(1f);
        System.out.println(class_.integer + "\n" + class1.floating_point);

    }
}
