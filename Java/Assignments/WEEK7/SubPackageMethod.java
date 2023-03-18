import SuperPackage.SubPackage2.Dog;
import SuperPackage.Cog;

class Husky implements Dog {

    public void bark() {
        System.out.println("Make Husky Sounds");
    }

    void eat() {
        System.out.println("Husky Eats");
    }
}

public class SubPackageMethod {
    public static void main(String[] args) {
        Husky Jannet = new Husky();
        Jannet.bark();
        Jannet.eat();
        new Cog().bark();
    }
}
