/**
 * ExceptionHandling: 
 * try,catch,finally,throws,throw keywords and 
 * custom exception
 */

/**
 * If we need a custom exception, then we can create them by
 * either extending the Exception class or RuntimeException class.
 * This InvalidDepositAmount is used to handle the negative amount
 * situation.
 */
class InvalidDepositAmountException extends Exception {
    InvalidDepositAmountException(String s) {
        super(s);
    }
}
public class ExceptionHandling {

    static double myBalance;
    /**
     * This deposit method takes a amount as double.
     * If the amount is negative, it throws the InvalidDepositAmount
     * 
     */
    /*
        -> If a method is capable of causing an exception that it does not handle, it must specify
           this behavior so that callers of the method can guard themselves against that exception.
        -> You do this by including a throws clause in the method’s declaration.   
        -> Throws keyword is required for only checked exceptions and usage of unchecked
            exceptions have no impact or use. 
    */
    public static void deposit(double amt) throws InvalidDepositAmountException {
        if (amt < 0) {
            /*
                -> Sometimes exception objects are created explicitly and can handover to JVM manually.
                    For this we have to use ‘throw’ keyword.
                -> Hence the main objective of throw keyword is to handover our created exception object
                    to the JVM manually
                -> Best use of throw keyword is for user defined exceptions or customized exceptions
            */
            throw new InvalidDepositAmountException("Not a valid amount");
        } else {
            System.out.println("Deposit amount is " + amt);
            System.out.println("Your old balance is " + myBalance);
            myBalance += amt;
            System.out.println("Your new balance is " + myBalance);
        }
    }

    public static void main(String[] args) {
        
        try {
            /*
               -> A try block is used to enclose the code that might throw an exception.
               -> Java try block must be followed by either catch or finally block.
            */
            deposit(1000);
            int res = 200/0;
            System.out.println("The divided result is :"+res);
        } catch (InvalidDepositAmountException e) {
            /*
                -> Java catch block is used to handle the Exception.
                -> It must be used after the try block only.
                -> We can also use multiple catch block with a single try.
            */
            System.out.println(e.getMessage());
        }catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }
        finally{
            /*
                -> Java finally block is always executed whether exception is handled or not.
                -> Java finally block follows try or catch block.
                -> Java finally block is a block that is used to execute important code such as closing
                    connection, stream, file etc
                ->
            */
            System.out.println("This is a finally block");
        }
    }
}