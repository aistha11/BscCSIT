using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    class LinqTest
    {
        static void Main(string[] args)
        {
            //  a.First create List of strings with 4 string values
            List<string> fruits = new List<string>() {
                "apple","mango","banana","grapes"
            };
            //  b.Get and show all string from List with LINQ
            var fruitQuery = from fruit in fruits select fruit;
            Console.WriteLine("Get and show all item in queryList");
            foreach (var fruit in fruitQuery)
            {
                Console.Write(fruit + ", ");
            }
            //  c.Filter and show the list containing the matching string text.
            var matchFruits = from fruit in fruits where fruit.Contains("ap") select fruit;
            Console.WriteLine("\nFiltering and showing item which contain 'ap'");
            foreach (var fruit in matchFruits)
            {
                Console.Write(fruit + ", ");
            }
            Console.ReadLine();

        }
    }
}
