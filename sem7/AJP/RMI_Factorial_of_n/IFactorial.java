/*--------------------------------------------------------
Step 1: Create the remote interface
--------------------------------------------------------*/
import java.rmi.*;
public interface IFactorial extends Remote {
    public int fact(int n) throws RemoteException;
}