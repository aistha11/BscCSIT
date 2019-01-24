#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class dist
{
  int ft,inc;
  public:
      dist()
      {
          ft=0;
          inc=0;

      }
  void setdata (int ,int );
  void display();
  void swap(dist &, dist &);
};
int main()
{
   dist a,b;
   a.setdata(5,6);
   b.setdata(7,8);
   cout<<"\nBefore Swap\n";
   cout<<"For A:";
   a.display();
   cout<<"For B:";
   b.display();
   cout<<"\nAfter Swap\n";
   a.swap(a,b);
   cout<<"For A:";
   a.display();
   cout<<"For B:";
   b.display();

   return 0;

}
void dist::setdata (int x,int y)
{
    ft=x;
    inc=y;

}
void dist::display()
  {
      cout<<"\nThe distance is "<<ft<<" feet "<<inc<<" inch. \n";

  }
void dist::swap(dist &x, dist &y)
  {
    dist t;
    t=x;
    x=y;
    y=t;


  }
