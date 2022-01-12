import java.rmi.*;
public class Server {
    public static void main(String[] args) {
        try {
            IFactorial factorial = new FactorialImpl();
            Naming.rebind("rmi://localhost:5000/factorial", factorial);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
