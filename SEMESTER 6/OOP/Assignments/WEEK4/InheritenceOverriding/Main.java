package InheritenceOverriding;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Dimentions
        int length, breadth, height, radius;

        System.out.print("Enter the dimentions of Box (l, b, h): ");
        length = scanner.nextInt();
        breadth = scanner.nextInt();
        height = scanner.nextInt();
        Box box = new Box(length, breadth, height);

        System.out.print("Enter the dimentions of Cube (l): ");
        length = scanner.nextInt();
        Cube cube = new Cube(length);

        System.out.print("Enter the dimentions of Cylinder (h, r): ");
        height = scanner.nextInt();
        radius = scanner.nextInt();
        Cylinder cylinder = new Cylinder(height, radius);

        System.out.print("Enter the dimentions of Cone (h, r): ");
        height = scanner.nextInt();
        radius = scanner.nextInt();
        Cone cone = new Cone(height, radius);
        System.out.printf("Total Surfce Areas:\n"
                + "1. Box: %f\n"
                + "2. Cube: %f\n"
                + "3. Cylinder: %f\n"
                + "4. Cone: %f\n\n"
                + "Volumes:\n"
                + "1. Box: %f\n"
                + "2. Cube: %f\n"
                + "3. Cylinder: %f\n"
                + "4. Cone: %f\n\n",

                box.volume(), cube.volume(),
                cylinder.volume(), cone.volume(),

                box.wholeSurfaceArea(), cube.wholeSurfaceArea(),
                cylinder.wholeSurfaceArea(), cone.wholeSurfaceArea());

        scanner.close();
    }
}
/*
--------
OUTPUT:
--------
$> javac -d . *.java && java InheritenceOverriding.Main
Enter the dimentions of Cube (l): 14
Enter the dimentions of Cylinder (h, r): 10 3
Enter the dimentions of Cone (h, r): 10 3
Total Surfce Areas:
1. Box: 2964.000000
2. Cube: 2744.000000
3. Cylinder: 282.743339
4. Cone: 94.247780

Volumes:
1. Box: 1262.000000
2. Cube: 1176.000000
3. Cylinder: 245.044227
4. Cone: 126.671905

 */