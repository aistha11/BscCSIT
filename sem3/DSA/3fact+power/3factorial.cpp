//to find factorial of integer n by recursion method
//to multiply two integers by recursion method
#include <iostream>
#include <iomanip>
using namespace std;
int fact (int n)
{
    if (n==0)
        return 1;
    return (n*fact(n-1));
}
int mul(int x,int y)
{
   if(y==1)
    return x;

   return (x+mul(x,y-1));
}
int main ()
{
    int n,a,b;
    cout<<"\n\t\tFor Factorial:\n";
    cout<<"\n\t\tEnter the value of n: ";cin>>n;
    cout<<"\t\tThe factorial of "<<n<<" is "<<fact(n);
    cout<<"\n\n\t\tFor Multiplication:\n";
    cout<<"\n\t\tEnter the value:\n\t\ta = ";cin>>a;
    cout<<"\t\tb = ";cin>>b;
    cout<<"\t\tThe value of "<<a<<" * "<<b<<" is "<<mul(a,b);
    return 0;
}
