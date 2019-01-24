#include <iostream>
#include <iomanip>
using namespace std;
class A
{
  int a;
  public:
        A ()
        {
            a=0;
        }
        A (int x)
        {
            a=x;
        }
        friend A operator +(A &x,A &y);
        void disp ()
        {
            cout<<"The member is "<<a<<endl;
        }
};

    A operator +(A &x,A &y)
    {
      int t;
      t=x.a+y.a;
      return A(t);
    }


int main ()
{
     A a1(10),a2(5),a3;
    cout<<"For a1:\n";
    a1.disp();
    cout<<"For a2:\n";
    a2.disp();
    a3=a1+a2;
    cout<<"Azfter Adding:\n";
    a3.disp();


   return 0;
}
