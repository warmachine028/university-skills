public class HandledException {
    public static void main(String[] args) {
        try {
            int array[] = { 1, 2, 3, 4 };
            System.out.println(array[3]);
            System.out.println(array[4]);
        } catch (ArrayIndexOutOfBoundsException error) {
            System.out.println("Can't Access array index: " + error.getMessage());
        }
    }
}
