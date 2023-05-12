class Object {
    int a, b;
    final int e = 19;
    static int c = 10;
    public int d = 12;
    private int result;

    Object(int a, int b) {
        this.a = a;
        this.b = b;
        result = this.a + this.b;
    }

}

class Constructor2 {
    public static void main(String[] args) {
        Object object = new Object(10, 12);
        Object object2 = new Object(11, 111);

        object.c += 10; // ? Static variables must be accesed using class Name
        Object.c *= 90; // * Static variables can be modified
        object.d = 90; // * both using instance & class
        object.e += 90; // ! -> Final Variable can't be reassigned
        System.out.println(object.result); // ! Private variable can't be accessed
        System.out.println(Object.a + " " + object.a + " " + object.a); // * Instance variable
        System.out.println(Object.c + " " + object.c + " " + object.c); // * Static variable
        System.out.println(Object.d + " " + object.d + " " + object2.d); // * Public variable
        System.out.println(object.e + " " + object2.e); // * Final variable

    }
}
