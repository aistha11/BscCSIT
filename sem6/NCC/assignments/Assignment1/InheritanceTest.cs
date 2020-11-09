using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    class InheritanceTest
    {
        
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            dog.bark();
            dog.showColor();
            dog.eat();
            Console.ReadLine();
        }
    }
}
