// CODE 3: Write a Program to implement the Yield method in multi-threading.

public class Yield implements Runnable {

    @Override
    public void run() {
        Thread thread = Thread.currentThread();
        String name = thread.getName();
        System.out.printf("%s Started\n", thread);
        for (int i = 0; i < 3; i++) {
            if (i == 1 && name.equals("Thread-0")) {
                Thread.yield();
                System.out.printf("%s Paused\n", thread);
            }
            System.out.println(i + " of " + name);
        }
        System.out.printf("%s Ended\n", thread);
    }

    public static void main(String[] args) {
        new Thread(new Yield()).start();
        new Thread(new Yield()).start();
    }
}
