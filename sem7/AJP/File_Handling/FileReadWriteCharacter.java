/**
 * Read from a file and Write content to a file
 */
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileReadWriteCharacter {
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("Test.txt");
            FileWriter fw = new FileWriter("FileOut.txt");
            int c;
            while ((c=fr.read())!= -1) {
                fw.write(c);
            }
            fr.close();
            fw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
