#include <iostream>
#include <iomanip>
using namespace std;
class usint
{
  int a;
  public:
        usint ()
        {
            a=0;
        }

        usint (int x)
        {
            a=x;
        }
        void operator --()
        {
            a--;
        }
        void disp()
        {
            cout<<"The integer is "<<a<<endl;
        }
};
int main ()
{
    usint i(3);
    i.disp();
    cout<<"After decrement:\n";
    --i;
     i.disp();
     return 0;
}
