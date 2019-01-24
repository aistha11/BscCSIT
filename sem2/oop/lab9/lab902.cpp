#include <iostream>
#include <iomanip>
using namespace std;
class distnce
{
  int feet;
  float inch;
  public:
        distnce(int x, float y)
        {
           feet=x;
           inch=y;
        }
        void disp ()
        {
            cout<<"The distance is "<<feet<<" feet "<<inch<<" inches.\n";
        }
        operator float()
        {
           float ft=inch/12;
           ft=ft+feet;
           return (ft/3.28);

        }
};
int main ()
{
    distnce d(12,6.56);
    d.disp();
    cout<<"Converting to basic type \n";
    float x=d;
    cout<<x<<endl;
    return 0;
}
