#include<iostream>
#include <iomanip>
using namespace std;
class complex
{
  int rl, img;
  public:
  complex ()
  {
      rl=2;
      img=2;
  }
  complex(int x,int y)
  {
      rl=x;
      img=y;
  }
  complex add(complex x,complex y);
  void display()
  {
      cout<<"\nThe complex is "<<rl<<" + "<<img<<" i .\n";
  }
};
int main ()
{
    complex c1,c2(5,7),c3;
    cout<<"For c1\n";
    c1.display();
    cout<<"For c2\n";
    c2.display();
    c3=c1.add(c1,c2);
    cout<<"For c3\n";
    c3.display();
    return 0;
}
complex complex::add(complex x, complex y)
{
    complex z;
   z.rl=x.rl+y.rl;
   z.img=x.img+y.img;
   return (z);
}


