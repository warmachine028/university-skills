public abstract class Account {
    int balance;
    String accountNumber,
            accountHoldersName,
            address;

    abstract void withdraw(int amount);

    abstract void deposit(int amount);

    void display() {
        System.out.println(balance);
    }
}

class SavingsAccount extends Account {
    double rateofInterest;

    SavingsAccount(String acctNum, String acctName, String address) {
        accountNumber = acctNum;
        accountHoldersName = acctName;
        this.address = address;
    }

    void withdraw(int amount) {
        balance -= amount;
        System.out.println(amount + " withdrawn");
    }

    void deposit(int amount) {
        balance += amount;
        System.out.println(amount + " deposited");
    }

    void calculateAmount() {
        System.out.println(balance * rateofInterest);
    }
}

class Main {
    public static void main(String[] args) {
        SavingsAccount acct = new SavingsAccount("122122112", "Abhishek", "14th RFI Rd.");
        acct.deposit(100000);
        acct.withdraw(2000);
        acct.withdraw(2000);
        acct.calculateAmount();
        acct.display();
    }
}