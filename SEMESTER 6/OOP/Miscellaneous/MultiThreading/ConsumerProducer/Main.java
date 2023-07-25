package ConsumerProducer;

public class Main {
    static public void main(String[] args) {
        Company company = new Company();
        Producer producer = new Producer(company);
        Consumer consumer = new Consumer(company);
        new Thread(producer).start();
        new Thread(consumer).start();

    }
}
// $> javac -d . .\ConsumerProducer\*.java && java ConsumerProducer.Main