#include <iostream>
#include <iomanip>
using namespace std;
class numb
{
    int x;
    public:
    numb ()
        {
            x=0;

        }
        void getdata (int a)
        {
           x=a;
        }
        void disp();
        numb& ularg (numb ,numb);

};
void numb:: disp ()
        {
            cout<<"The value is "<<x<<".\n";
        }


numb& numb:: ularg (numb n1,numb n2)
{
  if(n1.x>n2.x)
    {
        return (n1);
    }
    else
    {
        return (n2);
    }

}
int main ()
{
    numb m,n,r;
    m.getdata(5);
    m.disp();
    n.getdata(8);
    n.disp();
    r=r.ularg(m,n);
    cout<<"For Largest:\n";
    r.disp();

}
