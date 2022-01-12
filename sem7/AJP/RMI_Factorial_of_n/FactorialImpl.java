import java.rmi.*;
import java.rmi.server.*;

public class FactorialImpl extends UnicastRemoteObject implements IFactorial {
    FactorialImpl() throws RemoteException {
        super();
    }
    public int fact(int n){
        if(n>=1)
            return n * fact(n-1);
        else
            return 1; 
    }  
}
