#include <iostream>
#include <iomanip>
using namespace std;
class B;
class A
{
  int a;
  public:
        A (int x)
        {
            a=x;
        }
        friend void swap (A &, B &);
        void disp ()
        {
            cout<<"The member is "<<a<<endl;
        }
};
class B
{
  int b;
  public:
        B (int x)
        {
            b=x;
        }
        friend void swap (A &, B &);
        void disp ()
        {
            cout<<"The member is "<<b<<endl;
        }
};
void swap (A &x, B &y)
{
    int t;
    t=x.a;
    x.a=y.b;
    y.b=t;

}
int main ()
{
    A a(10);
    B b(6);
    cout<<"Before Swap :\nFor a: ";
    a.disp();
    cout<<"For b: ";
    b.disp();
    cout<<"After Swap:\n";
    swap(a,b);
    cout<<"For a: ";
    a.disp();
    cout<<"For b: ";
    b.disp();
    return 0;
}
