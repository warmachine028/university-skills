package InheritenceOverriding;

public class Cone extends Cylinder {
    Cone(int height, int radius) {
        super(height, radius);
    }

    double wholeSurfaceArea() { // S=πr(r + l); l=√(h^2 + r^2)
        int height = getHeight();
        int radius = getRadius();
        double slantHeight = Math.sqrt(
                Math.pow(height, 2) + Math.pow(radius, 2));
        return Math.PI * radius * (radius + slantHeight);
    }

    double volume() { // V=1/3πr^2h
        return 1.0 / 3 * super.volume();
    }
}
