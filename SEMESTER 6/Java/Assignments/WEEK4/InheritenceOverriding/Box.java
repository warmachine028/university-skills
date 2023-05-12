package InheritenceOverriding;

public class Box extends ThreeDObject {
    private int length, breadth, height;

    Box(int length, int breadth, int height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    double wholeSurfaceArea() { // S=2(lb + bh + hl)
        return 2 * (length * breadth + breadth * height + height * length);
    }

    double volume() { // V=lbh
        return length * breadth * height;
    }
}
