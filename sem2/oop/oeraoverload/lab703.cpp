#include <iostream>
#include <iomanip>
using namespace std;
class point
{
  int xcor, ycor;
  public:
        point ()
        {
            xcor=0;
            ycor=0;
        }

        point (int x,int y)
        {
            xcor=x;
            ycor=y;
        }
        void operator -()
        {
            /* xcor=xcor*(-1);
            ycor=ycor*(-1);*/
            xcor*=(-1);
            ycor*=(-1);
        }
        void disp()
        {
            cout<<"The point is ("<<xcor<<" , "<<ycor<<" ).\n";
        }
};
int main ()
{
    point c(3,-4);
    c.disp();
    cout<<"After invert:\n";
    -c;
     c.disp();
     return 0;
}
