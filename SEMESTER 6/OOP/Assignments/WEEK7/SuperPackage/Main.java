package SuperPackage;

public class Main {
    public static void main(String[] args) {
        var mark = new Cog();
        mark.meow();
        mark.bark();
    }
}

/* Executing this package
$> cd ../ && javac -d SuperPackage SuperPackage/*.java # Compiled
$> cd SuperPackage && java SuperPackage.Main # Running
$> rm -r SuperPackage
*/