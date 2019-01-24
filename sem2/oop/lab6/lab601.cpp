#include<iostream>
#include <iomanip>
using namespace std;
class dist
{
  int in, ft;
  public:
  dist(int x,int y)
  {
      in=x;
      ft=y;
  }
  void display()
  {
      cout<<"\nThe distance is "<<in<<" inch "<<ft<<" feet .\n";
  }
};
int main ()
{
    dist d(4,6);
    d.display();
    return 0;
}
