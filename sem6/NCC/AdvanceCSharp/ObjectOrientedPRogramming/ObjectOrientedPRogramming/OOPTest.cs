using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedPRogramming
{
    class OOPTest
    {
        
        static void Main(string[] args)
        {
            // Object of Studen using default constructor
            Student s1 = new Student();
            s1.name = "Ai";
            s1.age = 11;
            s1.Hobbie = "Coding";
            s1.Phone = 9845631066;
            s1.Marks = 84.33;
            Address s1Address = new Address("New Road", "Kathmandu", "Bagmati");
            s1.address = s1Address;
            s1.ViewStudentDetails();
            Console.WriteLine(Student.Properties());
            // Object of Studen using parameterized constructor
            Address address = new Address("Kusunti","Lalitpur","Bagmati");
            Student s2 = new Student("Stha", 18, 9616696882, 99.99,address);
            s2.ViewStudentDetails();
            Console.WriteLine(Student.Properties());
            //Inheritance
            // field inheritance
            Programmer p1 = new Programmer();
            Console.WriteLine($"Salary without bonus: {p1.salary}");
            Console.WriteLine($"Salary with bonus: {p1.salary + p1.bonus}");
            //method inheritance
            Dog dog = new Dog();
            dog.bark();
            dog.eat();
            dog.showColor();
            Cat cat = new Cat();
            cat.meow();
            cat.eat(); //Polymorphism
            //multi-level inheritance
            BabyDog babyDog = new BabyDog();
            babyDog.weep();
            babyDog.eat();
            babyDog.bark();
            //Implementing abstract class method
            Shape rect = new Rectangle();
            rect.draw();
            Shape circ = new Circle();
            circ.draw();
            //Implementing interface
            Television tvByRemote = new Remote();
            tvByRemote.Control("volumeUp");
            Television tvByMobile = new Mobile();
            tvByMobile.Control("powerOff");
            Console.ReadKey();
        }
    }
}
