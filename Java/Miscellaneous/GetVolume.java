import java.io.*;
import java.util.*;

class Output {
    void display(double volume) {
        System.out.printf("%.3f\n", volume);
    }
}

class GetVol {

    double main(int a) throws IOException { // Volume of cube
        return Math.pow(a, 3);
    };

    double main(int l, int b, int h) { // Volume of Cuboid
        return l * b * h;
    };

    double main(double r) { // Volume of hemisphere
        return 2.0 / 3 * Math.PI * Math.pow(r, 3);
    };

    double main(double r, double h) { // Volume of cylinder
        return Math.PI * r * r * h;
    }
}

class Calculate {
    Output output = new Output();;
    Scanner sc = new Scanner(System.in);
    NumberFormatException exception = new NumberFormatException("All the values must be positive");

    int getINTVal() throws NumberFormatException {
        int t = sc.nextInt();
        if (t <= 0)
            throw exception;
        return t;
    }

    double getDoubleVal() throws NumberFormatException {
        double t = sc.nextDouble();
        if (t <= 0)
            throw exception;
        return t;
    }

    static GetVol get_Vol() {
        return new GetVol();
    }
}

public class GetVolume {
    public static void main(String[] args) {
        System.out.println(2.0 / 3 * Math.PI * Math.pow(1.02, 3));
    }
}
