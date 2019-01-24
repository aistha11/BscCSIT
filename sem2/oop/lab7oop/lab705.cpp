#include <iostream>
#include <iomanip>
using namespace std;
class room
{
  int length, bredth;
  public:
        room ()
        {
            length=0;
            bredth=0;
        }

        room (int x,int y)
        {
            length=x;
            bredth=y;
        }
        room operator +(room r)
        {
            int a,b;
            a=length+r.length;
            b=bredth+r.bredth;
            return room(a,b);
        }
        room operator *(room r)
        {
            int a,b;
            a=length*r.length;
            b=bredth*r.bredth;
            return room(a,b);
        }
        void disp()
        {
            cout<<"The room have "<<length<<" length "<<bredth<<" breadth.\n";
        }
};
int main ()
{
    room r1(3,4),r2(5,8),r3;
    cout<<"For room r1:\n";
    r1.disp();
    cout<<"For room r2:\n";
    r2.disp();
    cout<<"After Adding rooms r1 and r2:\n";
    r3=r1+r2;
    r3.disp();
    cout<<"After Multiplication rooms r1 and r2:\n";
    r3=r1*r2;
    r3.disp();
     return 0;
}
