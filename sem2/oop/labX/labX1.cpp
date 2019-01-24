#include <iostream>
#include <iomanip>
using namespace std;
class A
{
    private: int x;
    protected: int y;
    public:
        A (int a)
        {
            y=a;
        }
    void getdata ()
    {
        cout<<"Enter x=";cin>>x;
        cout<<"Enter y=";cin>>y;
    }
    void showdata ()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }
};
class B: private A
{
  int z;
  public: B (int a, int b) : A(b)
          {
            z=a;
          }
          void sum ()
          {
              cout<<"Sum = "<<z+y;
          }
};
int main ()
{
    B b(4,6);
    b.sum();
    return 0;
}
