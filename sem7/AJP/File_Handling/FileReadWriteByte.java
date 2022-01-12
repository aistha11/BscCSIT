/**
 * Using Byte Stream Class to read from a file
 * and write to a file
 */
import java.io.*;
public class FileReadWriteByte {
    public static void main(String[] args) throws IOException{
        FileInputStream fr = null;
        FileOutputStream fw = null;
        try {
             fr = new FileInputStream("Test.txt");
             fw = new FileOutputStream("FileOutStream.txt");
            int c;
            while ((c=fr.read())!= -1) {
                fw.write(c);
            } 
        } finally{
            fr.close();
            fw.close();
        }
    }
}
