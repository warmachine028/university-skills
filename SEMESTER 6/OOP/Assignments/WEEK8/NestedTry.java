public class NestedTry {
    public static void main(String[] args) {
        try {
            String strings[] = new String[3];
            try {
                strings[3] = "Hello";
            } catch (ArrayIndexOutOfBoundsException error) {
                System.out.println("Error: " + error.getMessage());
                throw new RuntimeException("Some Error Occured inside the program");
            }
        } catch (RuntimeException error) {
            System.out.println("Error: " + error.getMessage());
        }
    }
}
