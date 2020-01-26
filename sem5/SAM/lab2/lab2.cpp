#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;
#define n 1000
void random_generator(int x[],int a, int c, int m,int b)
{
    for(int i=1;i<=b;i++)
    {
        x[i]=fmod((a*x[i-1]+c),m);
        cout<<x[i]<<"  ";
    }
    cout<<"\n\n";
}
int main()
{
    int x[n],a,c,m,b;
    cout<<"Enter no. of random no. to generate : ";cin>>b;
    cout<<"\nEnter seed x0 : ";cin>>x[0];
    cout<<"\nEnter constant multiplier a : ";cin>>a;
    cout<<"\nEnter increment c : ";cin>>c;
    cout<<"\nEnter modulus m : ";cin>>m;
    cout<<"\nThe random no. are : ";
    random_generator(x,a,c,m,b);
    return 0;
}
