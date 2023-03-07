
interface Gen1Species {
    int generation = 1;

    void walk();
}

interface Gen2Species extends Gen1Species {
    int generation = 2;

    void swim();
}

interface Gen3Species extends Gen2Species {
    int generation = 3;

    void think();
}

class Human implements Gen3Species {
    public void walk() {
        System.out.println("Walking...");
    }

    public void swim() {
        System.out.println("Swimming...");
    }

    public void think() {
        System.out.println("Thinking...");
    }
}

public class MultiLevelInterface {
    public static void main(String[] args) {
        Human human = new Human();
        human.think();
        human.walk();
        human.swim();
    }
}
