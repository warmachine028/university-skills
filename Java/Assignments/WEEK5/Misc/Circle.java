public class Circle {
    final static float PI = 3.14f;
    int radius;

    Circle(int radius) {
        this.radius = radius;
    }

    static String objectName() {
        return "This is the object for circles";
    }

    float area() {
        return PI * radius * radius;
    }

    float perimeter() {
        return 2 * PI * radius;
    }
}

class TestCircle {
    public static void main(String[] args) {
        System.out.println(new Circle(10).area());
        System.out.println(new Circle(10).perimeter());
        System.out.println(Circle.objectName());
    }
}
