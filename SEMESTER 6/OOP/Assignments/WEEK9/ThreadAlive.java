public class ThreadAlive {
    public static void main(String[] args) {
        Thread thread = new Thread(new ThreadPriority());
        thread.start();
        while (thread.isAlive())
            System.out.println("Alive...");
        System.out.println("Thread is Dead...");
    }
}
