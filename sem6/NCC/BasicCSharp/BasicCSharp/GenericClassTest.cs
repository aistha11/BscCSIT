using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BasicCSharp
{
    class GenericClassTest
    {
        class GenericClass<T>
        {
            private T data;

            public T value 
            {
                get
                {
                    return this.data;
                }
                set
                {
                    this.data = value;
                }
            }

        }

        class Password
        {
            public string psw { get; set; }
        }
        static void Main(string[] args)
        {
            GenericClass<int> age = new GenericClass<int>();
            age.value = 18;
            GenericClass<float> marks = new GenericClass<float>();
            marks.value = 84.23f;
            Console.WriteLine("Your age is {0} and marks is {1}", age.value, marks.value);
            GenericClass<Password> password = new GenericClass<Password>();
            password.value = new Password();
            Console.Write("Enter Password: ");
            password.value.psw = Console.ReadLine();
            Console.WriteLine("Your Password is "+ password.value.psw);
            Console.ReadKey();
        }
    }
}
