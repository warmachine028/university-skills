package AreaOfCircle;

public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle(
                new Point(0, 0), // Center
                new Point(1, -3) // Shift
        );
        System.out.println(circle.area());
    }
}
