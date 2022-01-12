import java.io.*;
import java.net.*;
import java.util.*;

public class ChatClientTcp {
    public static void main(String[] args) throws IOException {
        Socket cs = new Socket("localhost",1254);
        Scanner ins = new Scanner(cs.getInputStream());
        PrintWriter outs = new PrintWriter(cs.getOutputStream(), true);
        Scanner ink = new Scanner(System.in);
        String rmsg,smsg;
        do {
            rmsg = ins.nextLine();
            System.out.println("Server: "+ rmsg);
            System.out.println("Client: ");
            smsg = ink.nextLine();
            outs.println(smsg);
        } while (rmsg.equals("bye")!=true);
        ins.close();
        outs.close();
        ink.close();
        cs.close();
    }
}
