using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    public class Animal
    {
        public string color = "white";
        public virtual void eat()
        {
            Console.WriteLine("\tEating...");
        }
    }

    public class Dog : Animal
    {

        public override void eat()
        {
            Console.WriteLine("\tDog is Eating...");
        }

        public void bark()
        {
            Console.WriteLine("\tBarking...");
        }
        public void showColor()
        {
            Console.WriteLine($"\tAnimal Base Color: {base.color}"); // use of base keyword
            Console.WriteLine($"\tDog color: {color}");
        }
    }
    public class Cat : Animal
    {
        public void meow()
        {
            Console.WriteLine("\tMeowing...");
        }
        public override void eat()
        {
            Console.WriteLine("\tCat is eating");
        }
    }
}
