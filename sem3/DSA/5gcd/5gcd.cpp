#include <iostream>
#include  <iomanip>
using namespace std;
int gcd(int x,int y)
{
    if (x<y)
        return gcd(y,x);
    else if (y<=x && x%y==0)
        return y;
    else
        return gcd(y,x%y);


}
int main ()
{
    int a,b;
    cout<<"\n\tEnter the value:\n\ta = ";cin>>a;
    cout<<"\tb = ";cin>>b;
    cout<<"\tThe gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}
