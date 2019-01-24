#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
    int a,b,r;
    cout<<"Enter the value of a and b:\n";
    cin>>a>>b;
    cout<<"The gcd("<<a<<","<<b<<") = ";
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cout<<a<<endl;
    return 0;
}
