class Object {
    private int number = 10;

    int getNumber() {
        return number;
    }
}
class GetterMethod {    
    public static void main(String[] args) {
        Object object = new Object();
        System.out.println(object.getNumber()); // Accessing Private variabes using getter method
    }
}
