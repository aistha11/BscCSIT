#include <iostream>
#include <iomanip>
using namespace std;
class complex
{
  int rl, img;
  public:
        complex ()
        {
            rl=0;
            img=0;
        }

        complex (int x,int y)
        {
            rl=x;
            img=y;
        }
        void operator ++()
        {
            rl++;
            img++;
        }
        void disp()
        {
            cout<<"The complex is "<<rl<<" + "<<img<<" i.\n";
        }
};
int main ()
{
    complex c(3,4);
    c.disp();
    cout<<"After increment:\n";
    ++c;
     c.disp();
     return 0;
}
