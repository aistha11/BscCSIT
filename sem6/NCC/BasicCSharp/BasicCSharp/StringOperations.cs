using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class StringOperations
    {
        static void Main(string[] args)
        {
            string str = "Hellow Larn C# ";
            string name = "AI";
            var lng = str.Length;
            var upp = str.ToUpper();
            var lower = str.ToLower();
            var comb = string.Concat(str,name);
            var substr = str.Substring(4);
            var index = str.IndexOf("#");
            Console.WriteLine(substr);
            Console.WriteLine(comb);
            Console.WriteLine($"# is located at {index}");
            Console.ReadKey();
        }
    }
}
