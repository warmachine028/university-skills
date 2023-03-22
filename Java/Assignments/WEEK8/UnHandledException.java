public class UnHandledException {
    public static void main(String[] args) {
        Object[] strings = new String[3];
        try {
            strings[0] = 1;
        } catch (Error e) {
            System.out.println("Error Must not occur, ArrayStoreException Must Occur");
        } 
        // catch (ArrayStoreException e) {
        //     System.out.println("Must throw this");
        // }
    }
}
