import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Throws {
    static void takeInput() throws IOException {
        BufferedReader bufReader = new BufferedReader(new FileReader("MultiCatch.java"));
        bufReader.close();
        String line = bufReader.readLine();
        System.out.println(line);
    }

    public static void main(String[] args) {
        try {
            takeInput();
        } catch (IOException error) {
            System.out.println(error.getMessage());
        }
    }
}
