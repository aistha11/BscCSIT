import java.io.*;
import java.net.*;

public class UDPClient {
    public static void main(String[] args) throws IOException {
        // crete socket
        DatagramSocket socket = new DatagramSocket();
        // send request
        byte[] buf = new byte[256];
        InetAddress address = InetAddress.getByName("localhost");
        DatagramPacket packet = new DatagramPacket(buf, buf.length, address, 4445);
        socket.send(packet);
        // get response
        packet = new DatagramPacket(buf, buf.length);
        socket.receive(packet);
        //display response
        String s = new String(packet.getData());
        System.out.println("Quote if the moment: "+ s);
        // close the socket
        socket.close();
    }
}
