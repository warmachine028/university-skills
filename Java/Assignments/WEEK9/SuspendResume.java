public class SuspendResume implements Runnable {
    @Override
    public void run() {
        Thread cuThread = Thread.currentThread();
        try {
            cuThread.wait(10);
            cuThread.notify();
        } catch (InterruptedException e) {
            System.out.println(e);
        }

    }

    public static void main(String[] args) {
        new Thread(new SuspendResume()).start();
        new Thread(new SuspendResume()).start();
    }
}
