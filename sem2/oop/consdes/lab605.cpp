#include <iostream>
#include <iomanip>
using namespace std;
int count=0;
class A
{
    int a;
    //int count;
    public: A()
    {
        count++;
        cout<<count<<" object created.\n";
        a=0;
    }
    ~A()
    {
        cout<<count<<" object destroyed.\n";
        count--;
    }
};
int main ()
{
    A p,q,r;

        cout<<"\n\nEnter Block1\n";
        A s;

        cout<<"\n\nEnter Block2\n";
        A t;

        cout<<"Re-Enter main Block\n";

    return 0;
}
