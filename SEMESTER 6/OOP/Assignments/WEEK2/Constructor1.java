class Object1 {

} // Default Constructor

class Object2 { // No args constructor
    Object2() {
        System.out.println("Hello, I have a no argument constructor!");
    }
}

class Constructor1 {
    public static void main(String[] args) {
        new Object1();
        new Object2();
    }
}
