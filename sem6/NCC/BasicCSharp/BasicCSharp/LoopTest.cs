using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class LoopTest
    {
        static void Main(string[] args)
        {
            //for
            Console.WriteLine("*****For*********");
            
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine($"i is {i}");
                if (i == 5)
                    break;
            }
            //for reverse -- forr
            Console.WriteLine("*****Forr*********");
            for (int i = 10 - 1; i >= 0; i--)
            {

                if (i > 4 && i < 7)
                    continue;
                else
                    Console.WriteLine($"i is {i}");
            }
            //while
            int x = 0;
            while (x<=5)
            {
                Console.WriteLine("Hello");
                x++;
            }
            //do-while
            int y = 0;
            do
            {
                Console.WriteLine("Hello");
                y++;
            } while (y <= 5) ;
            //foreach
            Console.WriteLine("*****For each*********");
            int[] intList = new int[] {2,3,4,6,73,4 };
            foreach (var item in intList)
            {
                Console.WriteLine(item);
            }
            string[] fruits = new string[] { "Apple", "mango", "banana", "grap"};
            foreach (var fruit in fruits)
            {
                Console.WriteLine(fruit);
            }
            List<string> lists = new List<string>() { };
            ArrayList arrList = new ArrayList();
            arrList.Add("adfasdf");
            Console.ReadKey();
        }
    }
}
