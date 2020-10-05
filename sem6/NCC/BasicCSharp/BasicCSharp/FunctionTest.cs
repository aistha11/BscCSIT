using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class FunctionTest
    {
        static void Main(string[] args)
        {
            //4
            //ReturnTpe     Parameter
            /*
             * 0                0
             * 0                1
             * 1                0
             * 1                
             */
            //type1
            //Function Overloading - same function name with different definitions
            Type1();
            Type2(5);
            Console.WriteLine($"You entered {Type2()}");
            Console.WriteLine($"The area of circle is {Type4(3.14,4.5)}");
            Console.ReadKey();
        }
        static void Type1()
        {
            Console.WriteLine("Type 1");
        }
        static void Type2(int x)
        {
            Console.WriteLine($"x is {x}");
        }
        static int Type2()
        {
            int x;
            Console.Write("Enter x:");
            x = Convert.ToInt32(Console.ReadLine());
            return x;
        }
        static double Type4(double pi, double r)
        {
            return pi * r * r;
        }
    }
}
