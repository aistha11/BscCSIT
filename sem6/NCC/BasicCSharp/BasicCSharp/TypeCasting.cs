using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class TypeCasting
    {
        static void Main(string[] args)
        {
            // 2 types
            //Implicit--- char-int-long-float-double---forward no backward
            char ch = 'C';
            int x = ch;
            long ln = x;
            float f = ln;
            double d = f;
            Console.WriteLine($"{ch} is upgraded to {d}");
            //Explicit
            int a = (int)3.67;
            Console.WriteLine(a);
            Console.ReadKey();
        }
    }
}
