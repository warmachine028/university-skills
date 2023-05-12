class AreaOfCircle {
    float area;
    final static float PI = 3.14f;

    AreaOfCircle(int radius) {
        this(radius, AreaOfCircle.PI);
    }

    AreaOfCircle(int radius, float pi) {
        this.area = pi * radius * radius;
    }
}

public class ThisConstructor {
    public static void main(String[] args) {
        AreaOfCircle areaCircle = new AreaOfCircle(10);
        System.out.println(areaCircle.area);
    }
}
