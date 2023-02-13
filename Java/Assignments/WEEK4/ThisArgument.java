class Class {
    int variable = 90;

    Class() {
        calling_method();
    }

    void calling_method() {
        called_method(this);
    }

    int called_method(Class class_) {
        return class_.variable;
    }
}

public class ThisArgument {
    public static void main(String[] args) {
        Class class_ = new Class();
        System.out.println(class_.variable);
    }
}
