#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class time
{
  int hr,mn,sc;
  public:
  void getdata ();
  void display();
  time add(time , time );
};
int main()
{
   time t1,t2,t3;
   t1.getdata();
   t1.display();
   t2.getdata();
   t2.display();
   cout<<"\nAfter adding";
   t3=t3.add(t1,t2);
   t3.display();
   return 0;

}
void time::getdata ()
{
    cout<<"\nEnter time:\nHour: ";
    cin>>hr;
    cout<<"Minute: ";
    cin>>mn;
    cout<<"Second: ";
    cin>>sc;


}
void time::display()
  {
      cout<<"\nThe time is "<<hr<<" hour "<<mn<<" min "<<sc<<" sec. \n";

  }
time time::add(time x, time y)
  {
    time t;
    t.hr=x.hr+y.hr;
    t.mn=x.mn+y.mn;
    t.sc=x.sc+y.sc;

    if (t.sc>=60)
    {
        t.mn=t.mn+t.sc/60;
        t.sc=t.sc%60;
    }
    if (t.mn>=60)
    {
        t.hr=t.hr+t.mn/60;
        t.mn=t.mn%60;
    }


    return t;


  }
