public class Main {
    static void extendingThread() {
        ExtendingThread threads[] = new ExtendingThread[9];
        for (int i = 0; i < 9; i++)
            threads[i] = new ExtendingThread(i);
        for (ExtendingThread thread : threads)
            thread.start();
    }

    static void implementingRunnable() {
        Thread threads[] = new Thread[9];
        for (int i = 0; i < 9; i++)
            threads[i] = new Thread(new ImplementingRunnable(i));
        for (Thread thread : threads)
            thread.start();
    }

    public static void main(String[] args) {
        // implementingRunnable();
        extendingThread();
    }
}
