import java.io.*;
import java.net.*;

public class URLConnectionDemo {
    public static void main(String[] args) throws Exception {
        URL url = new URL("https://aistha.blogspot.com");
        URLConnection urlcon = url.openConnection();
        InputStream stream = urlcon.getInputStream();
        int i;
        while ((i=stream.read())!= -1) {
            System.out.print((char)i);
        }
    }
}
