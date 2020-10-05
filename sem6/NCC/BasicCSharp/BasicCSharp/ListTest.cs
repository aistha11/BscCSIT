using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class ListTest
    {

        class Movie
        {
            //private data
            private string name;

            //properties
            public string Name { get { return this.name; } set { this.name = value; } }
        }

        static void Main(string[] args)
        {
            //Implementation if List, Foreach, Properties
            //List - List of type string
            List<string> languages = new List<string>() {
                "Python","Java","C#","JavaScripr","C++","PHP","R","Scala","Swift","Kotlin"
            };
            //Foreach - to loop the list one by one
            foreach (string language in languages)
            {
                Console.WriteLine($"\t{language}");
            }
            //using properties
            Movie m1 = new Movie();
            m1.Name = "Lappan Chappan";
            Console.WriteLine("Movie name is {0}", m1.Name);
            Console.ReadKey();
        }
        
    }
}
