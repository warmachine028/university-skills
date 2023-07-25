package ConsumerProducer;

public class Consumer implements Runnable {
    Company company;

    Consumer(Company c) {
        company = c;
    }

    public void run() {
        while (true) {
            company.consumeItem();
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
