class Constructor {
    Constructor() {
    }// -> Default Access Specifier
    private Constructor(int i) {
    }// -> Private Access Specifier
    public Constructor(char i) {
    }// -> Public Access Specifier

    protected Constructor(float i) {
    }// -> Public Access Specifier
}

public class AccessSpecifiersConstructor {
    public static void main(String[] args) {
        new Constructor();
        new Constructor(10);
        new Constructor(10f);
        new Constructor('c');
    }
}
