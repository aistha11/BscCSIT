using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedPRogramming
{
    // Single Level Inheritance - Inheriting field
    public class Employee
    {
        public float salary = 40000;
    }
    public class Programmer:Employee
    {
        public float bonus = 10000;
    }
}
