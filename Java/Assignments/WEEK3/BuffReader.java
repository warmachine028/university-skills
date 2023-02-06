import java.io.*;

public class BuffReader {
    public static void main(String[] args) throws IOException {
        InputStreamReader ISR = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(ISR);
        char c = (char) br.read(); // For character
        String s = br.readLine(); // For String
        System.out.println(c + " " + s);

        try {
            File file = new File("./ScanReader.java");
            FileReader fr = new FileReader(file);
            br = new BufferedReader(fr);
            fr.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}