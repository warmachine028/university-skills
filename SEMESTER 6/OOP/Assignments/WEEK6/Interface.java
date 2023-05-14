interface Printable {
    void print();
}

class Class implements Printable {
    @Override
    public void print() {
        System.out.println("Instance Method");
    }
}

public class Interface {
    public static void main(String[] args) {
        Class class_ = new Class();
        class_.print();
    }
}