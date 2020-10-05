using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    
    class DeligateLamdaExpression
    {
        //delegate definition
        delegate int del(int i);
        static void Main(string[] args)
        {
            //defining a deligate and also using lambda expression
            del myDelegate = y => y* y;
            //using above deligate to find the square of entered number
            Console.Write("Enter n: ");
            int n = Convert.ToInt32(Console.ReadLine());
            int j = myDelegate(n);
            Console.WriteLine($"Square of {n} is {j}");
            Console.ReadLine();
        }
    }
}
