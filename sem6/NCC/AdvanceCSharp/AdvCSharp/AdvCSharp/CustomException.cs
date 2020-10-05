using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

namespace AdvCSharp
{
    class CustomException 
    {
        public class InvalidAmountException:Exception
        {
            public InvalidAmountException(String message) : base(message)
            {

            }
        }
    
        static void deposit(int amount)
        {
            if(amount <= 0)
            {
                throw new InvalidAmountException("\tTried to deposit a negative money");
            }
            else
            {
                Console.WriteLine("\tAmount Deposited");
            }
        }
        static void Main(string[] args)
        {
            try
            {
                deposit(-16);
            }
            catch (InvalidAmountException e)
            {
                Console.WriteLine(e.Message);
            }
            Console.ReadKey();
        }
    }
}
