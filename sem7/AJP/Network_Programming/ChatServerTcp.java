import java.io.*;
import java.net.*;
import java.util.*;

public class ChatServerTcp {
    public static void main(String[] args) throws IOException{
        ServerSocket ss = new ServerSocket(1254);
        Socket cs = ss.accept();
        Scanner ins = new Scanner(cs.getInputStream());
        PrintWriter outs = new PrintWriter(cs.getOutputStream(),true);
        Scanner ink = new Scanner(System.in);
        String rmsgg, smsg;
        do{
            System.out.println("Server: ");
            smsg = ink.nextLine();
            outs.println(smsg);
            rmsgg = ins.nextLine();
            System.out.println("Client: "+rmsgg);
        }while(rmsgg.equals("bye")!=true);
        outs.close();
        ins.close();
        cs.close();
        ink.close();
        ss.close();
    }
}