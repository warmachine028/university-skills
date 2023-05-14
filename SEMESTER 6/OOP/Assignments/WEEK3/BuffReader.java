import java.io.*;

public class BuffReader {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("Enter a Character: ");
        char character = (char) br.read();
        br.readLine();

        System.out.print("Enter a Line: ");
        String string = br.readLine();

        System.out.println(character + " " + string);
        try {
            File file = new File("./ScanReader.java");
            FileReader fr = new FileReader(file);
            br = new BufferedReader(fr);
            System.out.println(br.readLine()); // Read 1 line from file
            fr.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}