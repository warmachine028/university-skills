class Class {
    Class method() {
        return this;
    }
}

public class ThisReturn {
    public static void main(String[] args) {
        Class object = new Class();
        System.out.println(object.method());
    }
}
