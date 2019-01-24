#include<iostream>
#include <iomanip>
using namespace std;
class ovrld
{
  int num1, num2;
  public:
  ovrld ()
  {
      num1=0;
      num2=0;
  }
  ovrld(int x,int y)
  {
      num1=x;
      num2=y;
  }
  ovrld (ovrld &o)
  {
     num1=o.num1;
     num2=o.num2;
  }
  void display()
  {
      cout<<"The number are "<<num1<<" , "<<num2<<".\n";
  }
};
int main ()
{
    ovrld o1(4,49),o2(7,45),o3(o1);
    cout<<"For o1\n";
    o1.display();
    cout<<"For o2\n";
    o2.display();
    cout<<"For o3\n";
    o3.display();
    return 0;
}



