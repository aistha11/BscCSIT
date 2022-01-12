import java.net.InetAddress;

public class InetDemo {
    public static void main(String[] args) throws Exception {
        InetAddress ip = InetAddress.getByName("www.youtube.com");
        System.out.println("Host Name: "+ ip.getHostName());
        System.out.println("IP Address: "+ ip.getHostAddress());
    }
}
