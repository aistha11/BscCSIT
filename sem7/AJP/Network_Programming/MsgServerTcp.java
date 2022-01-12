import java.io.*;
import java.net.*;
import java.util.*;

public class MsgServerTcp {
    public static void main(String[] args) throws IOException {
        //Register service on port 1254
        ServerSocket ss = new ServerSocket(1254);
        // Wait and accept a connection
        Socket cs = ss.accept();
        // Get a communication stream associated with the socket
        Scanner ins = new Scanner(cs.getInputStream());
        PrintWriter outs = new PrintWriter(cs.getOutputStream(), true);
        //Perform IO
        String s = ins.nextLine();
        System.out.println("From Client: "+s);
        outs.println("Hello Client");
        // Close Streams and connection
        ins.close();
        outs.close();
        cs.close();
        ss.close();
    }
}
