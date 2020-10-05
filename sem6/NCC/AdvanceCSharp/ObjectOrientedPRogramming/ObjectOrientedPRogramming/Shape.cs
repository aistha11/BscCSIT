using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedPRogramming
{
    //Implementation of abstract class & method
    public abstract class Shape
    {
        public abstract void draw();
    }

    public class Rectangle: Shape
    {
        public override void draw()
        {
            Console.WriteLine("\tDraw Rectangle");
        }

    }
    public class Circle : Shape
    {
        public override void draw()
        {
            Console.WriteLine("\tDraw Circle");
        }
    }
}
