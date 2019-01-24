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
        friend float averg (A , B );
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
        friend float averg (A , B );
        void disp ()
        {
            cout<<"The member is "<<b<<endl;
        }
};
float averg (A x, B y)
{
    float t;
    t=(x.a+y.b)/2.0;
    return t;

}
int main ()
{
    A a(10);
    B b(6);
    cout<<"For a: ";
    a.disp();
    cout<<"For b: ";
    b.disp();
    cout<<"The average is "<<averg(a,b)<<endl;
    return 0;
}
