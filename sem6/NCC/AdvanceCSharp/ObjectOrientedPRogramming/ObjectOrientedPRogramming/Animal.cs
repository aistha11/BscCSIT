using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedPRogramming
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
        new string color = "black";
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
    public class BabyDog:Dog
    {
        public override void eat()
        {
            Console.WriteLine("\tBabydog is Eating");
        }
        public void weep()
        {
            Console.WriteLine("\tWeeping...");
        }
    }
}
