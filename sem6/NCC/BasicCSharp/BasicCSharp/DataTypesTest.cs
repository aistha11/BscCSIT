using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class DataTypesTest
    {
        static void Main(string[] args)
        {
            //int, float, long , double, string, short, char, bool
            const double pi = 3.14;
            int x;
            var a = 324;
            float y = 30.34f; //small capital no matter
            char ch;
            bool isEasy = true;
            var adf = isEasy ? 12 : 23.4;
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.Write("Enter number: ");
            x = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter character: ");
            //ch = Convert.ToChar(Console.ReadLine());
            ch = Console.ReadKey().KeyChar;
            long ln = 2342342234324;
            double d = 23423424.2342342;
            double dd = 242342.234234D;
            short srt = 3234;
            Console.WriteLine("Hello World");
            Console.WriteLine("In same Line ");
            Console.WriteLine(x);
            Console.WriteLine("y is "+y);
            Console.WriteLine("ch is {0}", ch);
            Console.WriteLine(" Your name is {0}", name);
            Console.WriteLine($"ln is {ln} , d is {d}, dd is {dd}, srt is {srt}");
            Console.WriteLine($"adf is {adf}");
            Console.ReadKey();
        }
    }
}
