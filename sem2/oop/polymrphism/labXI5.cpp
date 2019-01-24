//WAP to create a class template having two data members of two different data types. Make two member function
//to initialize and display . Create one object having two data members with different types. Initialize its value and display.
#include <iostream>
#include <iomanip>
using namespace std;
template <class T,class S>
class A
{
    T a;
    S b;
    public:
        A (T x,S y)
        {
            a=x;
            b=y;
        }
        void disp()
        {
            cout<<"The numbers are "<<a<<" and "<<b;
        }
};

int main ()
{
  A <int,float>a(5,11.11);
  a.disp();
  return 0;
}
