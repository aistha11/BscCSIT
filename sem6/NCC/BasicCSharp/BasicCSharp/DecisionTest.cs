using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class DecisionTest
    {
        static void Main(string[] args)
        {
            // if/else
            int x = 23;
            int y = 43;
            if (x>y)
            { 
                Console.WriteLine($"{x} is greater than {y}");
            }
            else
            {
                Console.WriteLine($"{x} is less than {y}");
            }
            // if/else/if ladder
            if(x>=12&&x<=23)
                Console.WriteLine("I am young");
            else if(x>23)
                Console.WriteLine("I am Old");
            else
                Console.WriteLine("I am child");

            // Switch
            switch (x)
            {
                case 5:
                    Console.WriteLine("First case");
                    break;
                case 10:
                    Console.WriteLine("Second case");
                    break;
                case 23:
                    Console.WriteLine("Third case");
                    break;
                case 335:
                    Console.WriteLine("Fourth case");
                    break;
                default:
                    break;
            }
            Console.ReadKey();
        }
    }
}
