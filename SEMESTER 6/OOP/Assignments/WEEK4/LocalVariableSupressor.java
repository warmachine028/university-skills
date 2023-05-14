class Class {
    int variable = 90; // instance variable
    static int class_variable = 0; // class variable

    Class(int variable) { // local variable
        variable = this.variable; // supressed using this keyword
        System.out.println(variable);
    }
}

public class LocalVariableSupressor {
    public static void main(String[] args) {
        new Class(100);
    }
}
