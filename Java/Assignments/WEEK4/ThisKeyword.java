class Class {
    int variable;

    Class(int variable) {
        this.method(variable);
    }

    void method(int value) {
        this.variable = value;
    }
}

public class ThisKeyword {
    public static void main(String[] args) {
        Class class_ = new Class(404);
        System.out.println(class_.variable);
    }
}
