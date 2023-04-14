import java.util.Arrays;

class Data {
    private String items[];
    private boolean fetching;

    synchronized void fetchData(String items[]) {
        while (!fetching)
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("Thread Interrupted");
            }
        System.out.println("Fetching Data...");
        this.items = items;
        fetching = false;
        notify();
    }

    synchronized void performOperation() {
        while (fetching)
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("Thread Interrupted");
            }
        System.out.println("Performing Operation...");
        System.out.println(Arrays.toString(items));
        fetching = true;
        notify();
    }
}

class Server implements Runnable {
    Data data;

    Server(Data d) {
        data = d;
        new Thread(this).start();
    }

    @Override
    public void run() {
        String items[] = new String[10];
        int i = 0;
        while (i < 10)
            try {
                items[i++] = "Hello" + i;
                data.fetchData(items);
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println("Thread Interrupted");
            }
    }
}

class Client implements Runnable {
    Data data;

    Client(Data d) {
        data = d;
        new Thread(this).start();
    }

    @Override
    public void run() {

        while (true)
            data.performOperation();
    }
}

public class SuspendResume {
    public static void main(String[] args) {
        Data d = new Data();
        new Server(d);
        new Client(d);
    }
}
