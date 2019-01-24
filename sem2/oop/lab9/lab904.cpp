#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

class rupee
{
    float rs,paisa;
    public:
        rupee (float r, float p)
        {
           rs=r;
           paisa=p;
        }
        void disp ()
        {
            cout<<"The amount is "<<rs<<" rs "<<paisa<<" paisa.\n";
        }

};
class dollar
{
  float dl,cent;
  public:
        dollar(float x, float y)
        {
           dl=x;
           cent=y;
        }
        void disp ()
        {
            cout<<"The amount is "<<dl<<" $ "<<cent<<" cents.\n";
        }
        operator rupee ()
        {
            float a,b,c;
            a=dl*100;
            b=cent*100;
            return rupee(a,b);
        }

};
int main ()
{
    dollar D(1.50,5.78);
    D.disp();
    rupee R=D;
    R.disp();
    return 0;
}
