interface Cat {
    void meow();
}

interface Dog {
    void bark();
}

class Cog implements Dog, Cat {
    @Override
    public void meow() {
        System.out.println("Cat sounds...");
    }

    @Override
    public void bark() {
        System.out.println("Dog sounds...");
    }
}

public class MultipleInheritence {
    public static void main(String[] args) {
        Cog mark = new Cog();
        mark.meow();
        mark.bark();
    }
}
