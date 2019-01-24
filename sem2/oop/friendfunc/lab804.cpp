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
        friend void operator ++(A &);
        void disp ()
        {
            cout<<"The member is "<<a<<endl;
        }
};

    void operator ++ (A &x)
    {
      x.a++;
    }


int main ()
{
     A a1(10);
    cout<<"For a1:\n";
    a1.disp();
   ++a1;
   cout<<"After Increment:\n";
   a1.disp();
   return 0;
}
