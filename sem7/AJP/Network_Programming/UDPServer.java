import java.io.*;
import java.net.*;

public class UDPServer {
    public static void main(String[] args) throws IOException {
        byte[] buf = new byte[256];
        // create datagram socket
        DatagramSocket socket = new DatagramSocket(4445);
        //receive request
        DatagramPacket packet = new DatagramPacket(buf, buf.length);
        socket.receive(packet);
        InetAddress address = packet.getAddress();
        int port = packet.getPort();
        String s = "Hello";
        buf = s.getBytes();
        // send the response to the client at "address" and "port"
        packet = new DatagramPacket(buf, buf.length, address, port);
        socket.send(packet);
        // close socket
        socket.close();
    }
}
