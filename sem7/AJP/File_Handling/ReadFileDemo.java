/**
 * Read a file and display it's content
 */
import java.io.FileReader;
import java.io.IOException;

public class ReadFileDemo {
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("Test.txt");
            int c;
            while ((c = fr.read()) != -1) {
                System.out.print((char) c);
            }
            fr.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}