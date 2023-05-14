package AreaOfCircle;

public class Circle {
    Point center;
    Point shift;
    float radius;
    private static float PI = 3.14f;

    Circle(Point center, Point shift) {
        this.center = center;
        this.shift = shift;
        calculateRadius();
        System.out.println("Radius: "+ radius);
    }

    double area() {
        return PI * Math.pow(radius, 2);
    }

    private void calculateRadius() { // r = ((x - h)^2 + (y - k)^2)^0.5
        int x = center.x, y = center.y;
        int h = shift.x, k = shift.y;
        radius = (float) Math.sqrt(Math.pow(x - h, 2) + Math.pow(y - k, 2));
    }
}
