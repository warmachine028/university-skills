package SuperPackage;

import SuperPackage.SubPackage1.Cat;
import SuperPackage.SubPackage2.Dog;

public class Cog implements Dog, Cat {
    @Override
    public void meow() {
        System.out.println("Cat Sounds...");
    }

    @Override
    public void bark() {
        System.out.println("Dog Sounds...");
    }
}