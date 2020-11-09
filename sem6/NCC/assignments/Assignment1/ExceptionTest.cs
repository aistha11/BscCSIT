using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    class ExceptionTest
    {
        static void Main(string[] args)
        {
            // WAP to Handle DivdeByZeroException and IndexOutOfRangeException
            var a = 11;
            var b = 0;
            try
            {
               var c = a / b;
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine(e.Message);
            }

            List<string> languages = new List<string>() {
                "Python","Java","C#","JavaScripr","C++","PHP","R","Scala","Swift","Kotlin"
            };
            for (int i = 0; i < 11; i++)
            {
                
                try
                {
                    Console.WriteLine(languages[i]);
                }
                catch (ArgumentOutOfRangeException e)
                { 
                   Console.WriteLine(e.Message);
                }
            }
            Console.ReadLine();
        }
    }
}
