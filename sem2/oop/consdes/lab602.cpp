#include<iostream>
#include <iomanip>
using namespace std;
class time
{
  int hr, mn;
  public:
  time ()
  {
      hr=0;
      mn=0;
  }
  time(int x,int y)
  {
      hr=x;
      mn=y;
  }
  time add(time x,time y);
  void display()
  {
      cout<<"\nThe time is "<<hr<<" hour "<<mn<<" minutes .\n";
  }
};
int main ()
{
    time t1(4,49),t2(7,45),t3;
    cout<<"For T1\n";
    t1.display();
    cout<<"For T2\n";
    t2.display();
    t3=t1.add(t1,t2);
    cout<<"For T3\n";
    t3.display();
    return 0;
}
time time::add(time x, time y)
{
    time z;
   z.hr=x.hr+y.hr;
   z.mn=x.mn+y.mn;
   return (z);
}

