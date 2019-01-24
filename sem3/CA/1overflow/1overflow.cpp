#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    short a,b,r,sa,sb,sr;
    cout<<"Enter a and b :\n";
    cin>>a>>b;
    r=a+b;
    sa=(a>>16)&1;
    sb=(b>>16)&1;
    sr=(r>>16)&1;
    if ((sa==sb)&&(sa==sr)||(sa!=sb))
    cout<<"Result is "<<r<<endl;
    else
    cout<<"Overflow Detected.";
    return 0;
}
