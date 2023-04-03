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
        Thread th1 = new Thread(new Yield());
        Thread th2 = new Thread(new Yield());

        th1.start();
        th2.start();
    }
}
