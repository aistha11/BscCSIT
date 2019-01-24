#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter a and b: \n";
    cin>>a>>b;
    try {
    if (b==0)
    throw b;
    else
    cout<<a<<"/"<<b<<"="<<a/b;
    }
    catch (int b)
    {
       cout<<"Divide by zero.";
    }
    return 0;
}
