using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    class MultipleInheritance
    {
        public interface Ia
        {
            void f1();
        }

        public class A : Ia
        {
            public void f1()
            {
                Console.WriteLine("f1 in A");
            }
        }
        public interface Ib
        {
            void f2();
        }
        public class B : Ib
        {
            public void f2()
            {
                Console.WriteLine("f2 in B");
            }
        }

        public class C : Ia, Ib
        {
            A a = new A();
            B b = new B();
            public void f1()
            {
                a.f1();
            }

            public void f2()
            {
                b.f2();
            }
        }

    }
}
