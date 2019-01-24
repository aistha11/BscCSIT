#include <iostream>
#include <iomanip>
using namespace std;
class time
{
  int hr,mn,sec;
  public:
        time(int x, int y,int z)
        {
           hr=x;
           mn=y;
           sec=z;
        }
        void disp ()
        {
            cout<<"The time is "<<hr<<" hour "<<mn<<" minutes "<<sec<<" seconds ";
        }
        time (int s)
        {
            hr=s/(3600);
            s=s-hr*3600;
            mn=s/60;
            sec=s%60;

        }
};
int main ()
{
    int t=3890;
    time t1=t;
    t1.disp();
    return 0;
}
