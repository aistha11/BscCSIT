#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<iostream>
#include<iomanip>
using namespace std;
int a[4],i;
float f(float x)
{
   return (a[3]*pow(x,3)+a[2]*pow(x,2)+a[1]*pow(x,1)+a[0]*pow(x,0));
}
float fd (float x)
{
    return (3*a[3]*pow(x,2)+2*a[2]*pow(x,1)+a[1]);
}
int main ()
{
   float x0,x1,fx0,fdx0,E,Ea;
   printf("Enter the value of:\n");
   for (i=3;i>=0;i--)
   {
       printf("a%d = ",i);
       scanf("%d",&a[i]);
   }
   printf("Enter initial guess (x0) = "); scanf("%f",&x0);
   printf("Enter Estimate Error: "); scanf("%f",&E);
   cout<<"\n\tx0\t\tx1\t\tf(x0)\t\tfd(x0)\t\tError\n";
   while(1)
   {
        fx0=f(x0);
        fdx0=fd(x0);
        x1=x0-(fx0/fdx0);
        Ea=fabs((x1-x0)/x1);
        cout<<"\n\t"<<x0<<"\t"<<x1<<"\t"<<fx0<<"\t"<<fdx0<<"\t"<<Ea<<"\t";
        if (Ea<E)
        {
           printf("\n\t\tRoot is %f",x1);
           break;
        }
        else
            x0=x1;
   }
    return 0;
}
