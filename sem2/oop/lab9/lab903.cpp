#include <iostream>
#include <iomanip>
using namespace std;
class distnce
{
  int feet;
  public:
        distnce(int x)
        {
           feet=x;
        }
        void disp ()
        {
            cout<<"The distnce is "<<feet<<" feet \n";
        }
        operator float()
        {
           return (feet/3.28);

        }
};
int main ()
{
    distnce d(1);
    d.disp();
    cout<<"Converting to basic type \n";
    float x=d;
    cout<<x<<endl;
    return 0;
}

