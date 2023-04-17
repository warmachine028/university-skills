// CODE 7: Write a Java Program to Synchronize the Threads Acting on the Same Object. The  Synchronized Block in the Program can be Executed by Only One Thread at a Time.  

public class Synchronisation implements Runnable {
    private int count = 0;
    public void run() {
        synchronized (this) {
            for (int i = 1; i <= 5; i++)
                System.out.println(Thread.currentThread().getName() +
                                     ": " + count++);
        }
    }

    public static void main(String[] args) {
        Runnable runnable = new Synchronisation();
        new Thread(runnable).start();
        new Thread(runnable).start();
    }
}
