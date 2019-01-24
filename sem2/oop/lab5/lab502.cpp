#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class complex
{
  int rl,im;
  public:
  void getdata ();
  void display();
  complex dif(complex , complex );
};
int main()
{
   complex c1,c2,c3;
   c1.getdata();
   c1.display();
   c2.getdata();
   c2.display();
   cout<<"\nAfter subtracting\n";
   c3=c3.dif(c1,c2);
   c3.display();
   return 0;

}
void complex::getdata ()
{
    cout<<"\nEnter complex value: \n";
    cout<<"Real: ";
    cin>>rl;
    cout<<"Imaginary: ";
    cin>>im;


}
void complex::display()
  {
      cout<<"\nThe complex is "<<rl<<" + "<<im<<" i ";

  }
complex complex::dif(complex x, complex y)
  {
    complex t;
    t.rl=x.rl-y.rl;
    t.im=x.im-y.im;

    return t;


  }
