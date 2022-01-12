import java.rmi.*;
public class Client {
    public static void main(String[] args) {
        try {
            IFactorial factorial = (IFactorial) Naming.lookup("rmi://localhost:5000/factorial");
            int n = Integer.parseInt(args[0]);
            int fact = factorial.fact(n);
            System.out.println("Factorial of "+n+" is "+fact);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
