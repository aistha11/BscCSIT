import java.io.*;
import java.net.*;
import java.util.*;

public class MsgClientTcp {
    public static void main(String[] args) throws IOException {
        // Open a socket
        Socket cs = new Socket("localhost",1254);
        // Get an input file handle from the socket and read the input
        Scanner ins = new Scanner(cs.getInputStream());
        PrintWriter outs = new PrintWriter(cs.getOutputStream(), true);
        //Perform IO
        outs.println("Hello Server");
        String s = ins.nextLine();
        System.out.println("From Server: "+s);
        // Close Streams and connection
        ins.close();
        outs.close();
        cs.close();
    }
}
