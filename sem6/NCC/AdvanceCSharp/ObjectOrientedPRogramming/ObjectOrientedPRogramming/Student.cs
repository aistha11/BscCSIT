using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedPRogramming
{
    class Student
    {
        //Public fields
        public string name;
        public int age;
        public Address address; //Eg of aggregation
        //private fields
        private long phoneNumber;
        private double marks;
        //static field
        public static string colz = "Sagarmatha College";
        //Properties - prop & Getter Setter
        public string Hobbie { get; set; }
        public long Phone { get { return phoneNumber; } set { phoneNumber = value; } }
        public double Marks { get { return marks; } set { marks = value; } }
        
        //Methods
        public void ViewStudentDetails()
        {
            Console.WriteLine("**********Student Detail*********");
            Console.WriteLine($"\tName: {name}");
            Console.WriteLine($"\tAge: {age}");
            Console.WriteLine($"\tPhone no: {phoneNumber}");
            Console.WriteLine($"\tMarks: {marks}");
            Console.WriteLine($"\tHobbie: {Hobbie}");
            Console.WriteLine($"\tAddress is {address.city}, {address.addressLine}, {address.state}");
        }
        //static method
        public static string Properties()
        {
            return $"My College name is {colz}";
        }
        //Constructor
        public Student() { } //Default
        public Student(string name, int age, long phoneNumber, double marks, Address address) // Parameterized
        {
            this.name = name;
            this.age = age;
            this.phoneNumber = phoneNumber;
            this.marks = marks;
            this.address = address;
        }
        //Destructor
        ~Student()
        {
            Console.WriteLine("Destructor Invoked");
        }
    }
}
