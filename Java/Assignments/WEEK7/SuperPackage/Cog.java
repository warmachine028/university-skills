package SuperPackage;

import SuperPackage.SubPackage1.Cat;
import SuperPackage.SubPackage2.Dog;

public class Cog implements Dog, Cat {
    public void meow() {
        System.out.println("Cat Sounds...");
    }

    public void bark() {
        System.out.println("Dog Sounds...");
    }
}