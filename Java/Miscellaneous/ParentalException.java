import java.io.IOException;

class Parent {

    int min = 0,
        max = 10,
        randomNumber = (int) (Math.random() * (max - min + 1) + min);

    Parent() throws IOException {
        if (randomNumber == 6)
            throw new IOException();
    }
}

class Child extends Parent {
    Child() throws IOException {

    }
}

public class ParentalException {
    public static void main(String[] args) {
        try {
            new Child();
        } catch (IOException exception) {
            System.out.println(exception.getMessage());
        }
    }
}
