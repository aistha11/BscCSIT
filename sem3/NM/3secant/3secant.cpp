#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include<iomanip>
using namespace std;
int a[4],i;
float f(float x)
{
   return (a[3]*pow(x,3)+a[2]*pow(x,2)+a[1]*pow(x,1)+a[0]*pow(x,0));
}
int main ()
{
   float x0,x1,x2,fx0,fx1,E,Ea;
   printf("Enter the value of:\n");
   for (i=3;i>=0;i--)
   {
       printf("a%d = ",i);
       scanf("%d",&a[i]);
   }
   printf("Enter initial guess:\nx0 = "); scanf("%f",&x0);
   printf("x1 = ");scanf("%f",&x1);
   printf("Estimate Error: "); scanf("%f",&E);
   printf("\n\t x1\t x2\t x3\t f(x1)\t f(x2)\t Error\n");
   while(1)
   {

        fx0=f(x0);
        //cout<<"\n\nfx1 = "<<fx0;
        fx1=f(x1);
        //cout<<"\nfx2 = "<<fx1;
        x2=x1-((fx1*(x1-x0))/(fx1-fx0));
        //cout<<"\nx3 = "<<x2;
        Ea=fabs((x2-x1)/x2);
        //cout<<"\nEa = "<<Ea;
        cout<<"\n\t"<<x0<<"\t\t"<<x1<<"\t\t"<<x2<<"\t\t"<<fx0<<"\t\t"<<fx1<<"\t\t"<<Ea<<endl;
        if (Ea<E)
        {
           printf("\n\t\tRoot is %f",x2);
           break;
        }
        else
        {
           x0=x1;
           x1=x2;
        }


   }
    return 0;
}
