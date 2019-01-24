#include <iostream>
#include <iomanip>
using namespace std;


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
        float getdl ()
        {
            return dl;
        }
        float getcent ()
        {
            return cent;
        }

};
class rupee
{
    float rs,paisa;
    public:
        rupee ()
        {

        }
        rupee (float r, float p)
        {
           rs=r;
           paisa=p;
        }
        void disp ()
        {
            cout<<"The amount is "<<rs<<" rs "<<paisa<<" paisa.\n";
        }
        rupee(dollar D)
        {
            rs=D.getdl()*100;
            paisa=D.getcent()*100;
        }

};
int main ()
{
    dollar D(1.50,6.70);
    D.disp();
    rupee R=D;
    R.disp();
    return 0;
}

