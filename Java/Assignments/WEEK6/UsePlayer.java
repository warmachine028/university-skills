interface Player {
    abstract void play();
}

class Child implements Player {
    public void play() {
        System.out.println("Child plays song");
    }
}

class Musician implements Player {
    public void play() {
        System.out.println("Musician plays Music");
    }
}

class Actor implements Player {
    public void play() {
        System.out.println("Actor plays Acts");
    }
}

public class UsePlayer {
    public static void main(String[] args) {
        new Child().play();
        new Musician().play();
        new Actor().play();
    }
}