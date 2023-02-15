package InheritenceOverriding;

public class Cylinder extends ThreeDObject {
    private int height, radius;

    Cylinder(int height, int radius) {
        this.height = height;
        this.radius = radius;
    }

    double wholeSurfaceArea() { // S=2πr(r + h)
        return 2 * Math.PI * radius * (radius + height);
    }

    double volume() { // V=πr^2h
        return Math.PI * Math.pow(radius, 2) * height;
    }

    int getHeight() {
        return height;
    }

    int getRadius() {
        return radius;
    }
}
