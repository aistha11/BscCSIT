#include <iostream>
#include <iomanip>
using namespace std;
class time
{
  int hr, min;
  public:
        time ()
        {
            hr=0;
            min=0;
        }

        time (int x,int y)
        {
            hr=x;
            min=y;
        }
        int operator >(time r)
        {

           if(hr>r.hr)
           {
               return 1;
           }
           else
           {
               return 0;
           }

        }

        void disp()
        {
            cout<<"The time is "<<hr<<" hr "<<min<<" min.\n";
        }
};
int main ()
{
    time t1(3,4),t2(5,8);
    cout<<"For t1:\n";
    t1.disp();
    cout<<"For t2:\n";
    t2.disp();
    cout<<"After Comparing:\n";
    if(t1>t2)
    {
        cout<<"The time t1 is greater.\n";
        t1.disp();

    }
    else
    {
        cout<<"The time t2 is greater.\n";
        t2.disp();
    }
     return 0;
}
