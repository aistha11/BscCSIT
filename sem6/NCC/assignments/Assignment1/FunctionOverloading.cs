using System;

namespace Assignment1
{
    class FunctionOverloading
    {
        static int Area(int l) => l * l;
        static int Area(int l, int b) => l * b;
        static void Main(string[] args)
        {
            Console.WriteLine($"The area of square with length 5 is {Area(5)}");
            Console.WriteLine($"The area of rectangle with length 5 and breadth 7 is {Area(5,7)}");
            Console.ReadLine();
        }
    }
}
