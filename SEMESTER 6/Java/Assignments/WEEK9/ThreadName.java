public class ThreadName {
    public static void main(String[] args) {
        String name = Thread.currentThread().getName();
        System.out.println("Currently running thread is: " + name);
    }
}
