class Mother {
    int property = 10;

    void voice() {
        System.out.println("Voice...");
    }
}

class Son extends Mother {
    void sings() {
        System.out.println("Sings...");
    }
}

class Daughter extends Mother {
    void dances() {
        System.out.println("Dances...");
    }
}

public class Heirarchical {
    public static void main(String[] args) {
        Daughter alice = new Daughter();
        Son bob = new Son();
        bob.sings();
        alice.dances();
        alice.voice();
        System.out.println(bob.property == alice.property);
    }
}
