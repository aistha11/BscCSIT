#include <iostream>
#include <iomanip>
using namespace std;

class A
{
    private: int x;
    protected: int y;
    public:
    void getdata ()
    {
        cout<<"Enter x=";cin>>x;
        cout<<"Enter y=";cin>>y;
    }
    void display ()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }
};
class B: protected A
{
  int z;
  public: void setdata (int a, int b)
          {
            z=a;
            y=b;
          }
          void showdata ()
          {
              cout<<"z= "<<z<<"\ny= "<<y;
          }
};
int main ()
{
    B b;
    //b.getdata();   is not accessible
    //b.display();   is not accessible
    b.setdata(4,5);
    b.showdata();
    return 0;
}
