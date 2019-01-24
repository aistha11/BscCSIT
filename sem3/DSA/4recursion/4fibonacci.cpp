#include <iostream>
#include <iomanip>
using namespace std;
int Fibo(int n)
{
   if (n<=1)
        return n;
   return (Fibo(n-1)+Fibo(n-2));
}
int main()
{
    int num,i;
    cout<<"\n\t\tEnter the number: ";
    cin>>num;
    cout<<"\n\t\tThe first "<<num<<" fibonacci number are:\n\t\t";
    for(i=0;i<num;i++)
    {
       cout<<Fibo(i)<<", ";
    }

return 0;
}
